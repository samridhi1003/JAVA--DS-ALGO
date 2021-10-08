import java.io.*;
import java.util.*;
 
public class Main {
    //    static Integer[][] tokens;
    static int n;
 
    public static void main(String[] args) throws IOException {
        Scanner scn=new Scanner(System.in);
        int test = scn.nextInt();
        for (int o = 0; o < test; o++) {
            int n = scn.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++){a[i] = scn.nextInt();}
            Stack<Integer> stack  = new Stack<>();
            Integer[] ans = new Integer[n];
            for (int i = 0; i < n; i++){
                stack.push(i);
                int cream = a[i];
                int j = 0;
                while (j < a[i] && !stack.isEmpty()){
                    int l = stack.peek();
                    if (i - l < a[i]) {
                        int kk = stack.pop();
                        ans[kk] = 1;
                        j += 1;
                    }
                    else {break;}
                }
            }
            while (!stack.isEmpty()){
                int bp  = stack.pop();
                if (ans[bp] == null)ans[bp] = 0;
            }
            for (int i = 0; i < n; i++){
                System.out.print(ans[i] + " ");
            }
            System.out.println("");
            }
        }
    }