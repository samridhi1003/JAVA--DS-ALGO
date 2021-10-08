import java.io.* ;
import java.util.* ;
public class reviewsite{
public static void main(String args[]){
        Scanner scn=new Scanner(System.in);
        int T=scn.nextInt();
        for(int j=0;j<T;j++)
        {
            int count =0;
            int n=scn.nextInt();
            for (int rev=0;rev<n;rev++){
                int val=scn.nextInt();
                if(val==1||val==3){
                    count++;
                }
                
            }
            System.out.println(count);
        }
    }
}