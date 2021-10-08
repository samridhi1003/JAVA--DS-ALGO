import java.util.*;
class shape{
   public static int maxKsum(int arr[], int k){
       int n= arr.length;
       int maxsum=0;
         
       for(int i=0;i<k;i++){
           maxsum+=arr[i];
       }
       int sum=maxsum;
       for(int i=k;i<n;i++){
           sum+=arr[i]-arr[i-k];
           maxsum=maxEle(maxsum,sum);
       }
        return maxsum;
   }
   public static int maxEle(int a, int b){
       if(a>=b)
       return a;
    
       return b;
   }
    public static void main(String[] args){
       int arr[]={10,3,9,5,16,7,6,8,1,11};
       int k=4;
       int ans=maxKsum(arr,k);
       System.out.println(ans);

    }
}


