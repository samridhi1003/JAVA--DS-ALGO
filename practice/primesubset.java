import java.io.* ;
import java.util.* ;
public class primesubset{
public static void main(String args[]){
        Scanner scn=new Scanner(System.in);
         int n=scn.nextInt();
         int count=0;
         HashMap<Integer, Integer> maps=new HashMap<>();
         int [] arr=new int[n];
         for(int i=0;i<n;i++){
             arr[i]=scn.nextInt();
             if (!maps.containsKey(arr[i])){
                 maps.put(arr[i],1);
                 count++;
             }else{
                 continue;
             }
         }
         int [] optarr=new int[count];
         int j=0;
         for(int x:maps.keySet()){
             optarr[j]=x;
             j++;
         }
        subsets(0,count,optarr,1);
         System.out.println(ans-1);

    }   
    static int ans=0;
    static int m=100000007;
    public static void subsets(int i,int n, int[]array,int product ){
        
        if(i==n){
            if(product==1){
                ans=0;
            }
            if(prime(product)){
                ans=(ans % m)+1;
            }
           return;
        }
        subsets(i+1,n,array,product);
        subsets(i+1,n,array,product*array[i]);
    }
    public static boolean prime(int number){
        HashMap<Integer, Integer> pcount=new HashMap<>();
        for(int i = 2; i< number; i++) {
         while(number%i == 0) {
             if(pcount.containsKey(i)==false){
                 pcount.put(i,1);
             }
             else{
                 return false;
             }
            // System.out.println(i+" ");
            number = number/i;
         }
      }
      return true;
    }
}
// =======================================================================================
//====================================================================================
import java.io.* ;
import java.util.* ;
public class primesubset{
public static void main(String args[]){
        Scanner scn=new Scanner(System.in);
         int n=scn.nextInt();
         int count=0;
         maps=new HashMap<>();
         int [] arr=new int[n];
         for(int i=0;i<n;i++){
             arr[i]=scn.nextInt();
             if (!maps.containsKey(arr[i])){
                 maps.put(arr[i],1);
                 count++;
             }else{
                 continue;
             }
         }
         int [] optarr=new int[count];
         int j=0;
         for(int x:maps.keySet()){
             optarr[j]=x;
             j++;
         }
        int result=subsets(0,count,optarr,1);
         System.out.println(result);

    }   
    static  HashMap<Integer, Integer> maps;
     static int m=100000007;
    // return type from void to int
    public static int  subsets(int i,int n, int[]array,int product ){
        int ans=0;
        if(i==n){
            if(product==1)
            return 0;
            // prime product to prime
            
            if(prime(product)){
                ans=(ans%m)+1;
            }
            return ans;
        }
       int ans1= subsets(i+1,n,array,product);
       if(product%array[i]!=0){
           int ans2=subsets(i+1,n,array,product*array[i]);
       }
        
        return ((ans1%m)+(ans2%m))%m;
    }
    public static boolean prime(int number){
        HashMap<Integer, Integer> pcount=new HashMap<>();
        for(int i = 2; i< number; i++) {
         while(number%i == 0) {
             if(!pcount.containsKey(i))
             {// change kiya hai
                 pcount.put(i,1);
             }
             else{
                 return false;
             }
            number = number/i;
         }
      }
      return true;
    }
}