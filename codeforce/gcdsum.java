import java.io.* ;
import java.util.* ;
public class gcdsum
{
    public static long gcd(long a, long b)
	{
	if (b == 0)
		return a;
	return gcd(b, a % b);
	}
    public static long calcsum(long n2){
        long sum=0;
           for(int i=0;n2>0;i++){
               sum+=n2%10;
                n2=n2/10;
            }
            return sum;
    }
	public static void main(String[] args) {
	    Scanner scn = new Scanner(System.in);
        int t=scn.nextInt();
        for(int k=0;k<t;k++)
        {
            long n1=scn.nextInt();
            long summ=calcsum(n1);
            // int n2=n1;
        //     int sum=0;
        //    for(int i=0;n2>0;i++){
        //        sum+=n2%10;
        //         n2=n2/10;
        //     }
           

    // find GCD between n1 and n2
        long x=gcd(n1, summ);
        while(x<=1){
            n1+=1;
            long sum=calcsum(n1);
            x=gcd(n1, sum);
        }
        
    
        // initially set to gcd
       	System.out.println(n1);
    }
    }
}