import java.io.* ;
import java.util.* ;
public class sportmafia
{
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    long n = input.nextLong();
	    long k = input.nextLong();
	    long sum =0,cnt=0;
	    for(long i =1;i<=n;i++){
	        sum +=i;
	    }
	    while(sum!=k){
	        sum-=n;
	        cnt++;
	        n--;
	        sum--;
	    }
		System.out.println(cnt);
	}
}