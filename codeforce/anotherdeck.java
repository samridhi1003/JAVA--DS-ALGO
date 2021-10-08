import java.io.* ;
import java.util.* ;
public class anotherdeck{
    public static int findplace(int quer,int[]arr,long n){
        long index=0;
       
        for(long j=0;j<n;j++){
            long i=(n-1)-j;
            if(arr[i]==quer){
                index=j;
                arr=shift(i,n,quer,arr);
                // display(arr);
                return index;
            }
        
        }
        return index;
    }
    public static  void display(int[]arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static int[] shift(long i,long n,int quer,int[]arr){
        for(long k=i;k<n-1;k++){
            arr[k]=arr[k+1];
        }
        arr[n-1]=quer;
        return arr;
    }
public static void main(String args[]){
        Scanner scn=new Scanner(System.in);
        long n=scn.nextLong();
        long q=scn.nextLong();
        long j=0;
        Stack<Integer>st=new Stack<>();
        int[]arr=new int[n];
        for(long in=0;in<n;in++)
        {
            int a=scn.nextInt();
            st.add(a);
        }
        while(st.size()!=0){
            
            arr[j]=st.pop();
            j++;
        }
        for(long k=0;k<q;k++){
            int quer=scn.nextInt();
            int place=findplace(quer,arr,n);
            System.out.print(place+1);
        }
    }
}