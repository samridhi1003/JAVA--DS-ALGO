
import java.io.*;
import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int n = sc.nextInt(),p=0,q=0;
            int a[]= new int[n],b[]= new int[n],tm[]= new int[n];
            for (int i = 0; i < 2 * n; i++) {
                if(i%2==0){
                    a[p]=sc.nextInt();
                    p++;
                }else{
                    b[q]=sc.nextInt();
                    q++;
                }
            }
            for (int i = 0; i < n; i++) {
                tm[i]=sc.nextInt();
            }
            int ans=0, dep=0;
            for (int i = 0; i < n; i++) {
                int arr=0;
                if(i>0){
                    arr= dep+tm[i]+(a[i]-b[i-1]);
                }else{
                    arr= dep+tm[i]+a[i];
                }
//                System.out.println(a[i]+"    "+b[i]);
                int diff = b[i]-a[i];
                int stay = (int) (  Math.ceil(  (double) (diff/2.0)  )  );
//                System.out.println(stay+"This is value of stay");
                dep = Math.max((arr+stay),b[i]);
//                System.out.println(arr + "  "+ dep);
                if(i==(n-1))
                    ans=arr;
            }
            System.out.println(ans);
            t--;
        }
    }
}