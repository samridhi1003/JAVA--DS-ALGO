class helloworld{
   /**
 * Performs non-blocking speech recognition on remote FLAC file and prints the transcription as
 * well as word time offsets.
 *
 * @param gcsUri the path to the remote LINEAR16 audio file to transcribe.
 */
public static void asyncRecognizeWords(String gcsUri) throws Exception {
  // Instantiates a client with GOOGLE_APPLICATION_CREDENTIALS
  try (SpeechClient speech = SpeechClient.create()) {

    // Configure remote file request for FLAC
    RecognitionConfig config =
        RecognitionConfig.newBuilder()
            .setEncoding(AudioEncoding.FLAC)
            .setLanguageCode("en-US")
            .setSampleRateHertz(16000)
            .setEnableWordTimeOffsets(true)
            .build();
    RecognitionAudio audio = RecognitionAudio.newBuilder().setUri(gcsUri).build();

    // Use non-blocking call for getting file transcription
    OperationFuture<LongRunningRecognizeResponse, LongRunningRecognizeMetadata> response =
        speech.longRunningRecognizeAsync(config, audio);
    while (!response.isDone()) {
      System.out.println("Waiting for response...");
      Thread.sleep(10000);
    }

    List<SpeechRecognitionResult> results = response.get().getResultsList();

    for (SpeechRecognitionResult result : results) {
      // There can be several alternative transcripts for a given chunk of speech. Just use the
      // first (most likely) one here.
      SpeechRecognitionAlternative alternative = result.getAlternativesList().get(0);
      System.out.printf("Transcription: %s\n", alternative.getTranscript());
      for (WordInfo wordInfo : alternative.getWordsList()) {
        System.out.println(wordInfo.getWord());
        System.out.printf(
            "\t%s.%s sec - %s.%s sec\n",
            wordInfo.getStartTime().getSeconds(),
            wordInfo.getStartTime().getNanos() / 100000000,
            wordInfo.getEndTime().getSeconds(),
            wordInfo.getEndTime().getNanos() / 100000000);
      }
    }
  }
}
}