import java.io.* ;
import java.util.* ;
public class relativeprime
{
	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in);
        int t=scn.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=scn.nextInt();
            int[]arr=new int[n];
            for(int j=0;j<n;j++){
                arr[j]=scn.nextInt();
            }
            Arrays.sort(arr);
            int[]brr=new int[n];
            brr[0]=arr[0];
            HashMap<Integer,Integer> maps=new HashMaps<>();
            for(int k=1;k<n;k++){
                if(arr[k]!=arr[k-1]){
                    brr[k]=arr[k];
                }
                else{
                    if(maps.containsKey(arr[k])==false)
                    {
                        maps.put(arr[k],1);
                    }
                    else
                    {
                        int val=maps.get(arr[k]);
                        maps.put(arr[k],val+1);
                    }
                }
                
                
            }

        }
    }
}