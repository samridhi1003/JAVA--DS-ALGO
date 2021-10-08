import java.io.* ;
import java.util.* ;
public class boxfit
{
    Scanner scn = new Scanner(System.in);
        int t=scn.nextInt();
        for(int k=0;k<t;k++)
        {
            int n=scn.nextInt();
            int W=scn.nextInt();
            int[]arr=new int[n];
            HashMap<Integer,Integer> hm=new HashMap<>();
            for(int i=0;i<n;i++){
                int wi=scn.nextInt();
               
                if(hm.containsKey(wi)==false){
                    hm.put(wi,1);
                }
                else{
                    int x=hm.get(wi);
                    hm.put(wi,x+1);
                }
            }
            
           
}
