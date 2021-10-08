import java.io.* ;
import java.util.* ;
import java.lang.Math;
public class beautifulmat
{
    public static void main(String args[])throws NumberFormatException, IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
        int x=0,y=0;
		int[][]arr = new int[5][5];
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j]=Integer.parseInt(br.readLine());
                if(arr[i][j]==1){
                    x=i+1;
                    y=j+1;
                    break;
                }
            }
        }
       
        int ans= (Math.abs(y-3)+Math.abs(x-3));
        System.out.println(ans);
    }
}        
          