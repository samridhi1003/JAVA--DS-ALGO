 
  public static ArrayList<String> subseq_ret(String str){
        if(str.length()==0){
            ArrayList<String> base=new ArrayList<>();
            base.add("");
            return base;
        }
    
        char ch=str.charAt(0);
        String nstr=str.substring(1);

        ArrayList<String> smallAns=subseq_ret(nstr);
        
        ArrayList<String> myAns=new ArrayList<>(); //vector<string> myAns(smallAns);

        for(String s:smallAns){
            myAns.add(s);
            myAns.add(ch + s);
        }

        return myAns;
    }

    public static int subseq_void(String str,String ans){
        if(str.length()==0){
            System.out.println(ans);
            return 1;
        }

        int count=0;

        count+=subseq_void(str.substring(1),ans);
        count+=subseq_void(str.substring(1),ans+ str.charAt(0));
    
        return count;
    }
    