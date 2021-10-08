class bitmasking{
public static void main(String[]args)
    {
         int n=10;
         int k=3;
        // system.out.println(n+"="Integer.toBinaryString(n));
        // int t=10;
        // while(t--!=0)
        // {
        //     n<<=1;
        //     system.out.println(n+"="+Integer.toBinaryString(n));
        // }
        biton(n);
        bitrandom( n; k);

    }
    static void biton(int n){
        int mask=1;
        n|=mask;
         System.out.println(n+"="+Integer.toBinaryString(n));
    }
    static void bitrandom(int n;int k){
        int i=1;
        int x=1;
        while(i!=k-1){
            x<<=1;
            i++;
        }
         System.out.println(n+"="+Integer.toBinaryString(n));
    }
}