import java.io.* ;
import java.util.* ;
public class relativeprime
{
	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in);
        long l=scn.nextLong();
        long r=scn.nextLong();
        System.out.println("YES");
        for(long i=l;i<=r;i+=2){
            long k=i+1;
            System.out.println(i+" "+k);
        }

    }
}    