// import java.util.Scanner;
// class simpleinterst{
//     public static void main(String args[])
//     {
//         Scanner scn=new Scanner(System.in);
//         System.out.println("enter p:");
//         int p=scn.nextInt();
//          System.out.println("enter r:");
//         int r=scn.nextInt();
//          System.out.println("enter t:");
//         int t=scn.nextInt();
        
//         int si=(p*r*t)/100;
//         System.out.println(si);
//     }
// }               

import java.util.*; 
  
class simpleinterst
{ 
    public static String Xor(String ans,String n)
    {
        String res="";
        for(int i=0;i<ans.length();i++)
        {
            res+=ans.charAt(i)^n.charAt(i);
        }
        return res;
    }

public static void Binary(int n, String ans, int i) 
{ 
    if (i == n)  
    { 
        System.out.println(Xor(ans,"1101"));
        return; 
    } 
    Binary(n, ans+'0', i + 1); 
    Binary(n, ans+'1', i + 1); 
} 
public static void main(String args[]) 
{ 
    int n = 4; 
    Binary(n, "", 0); 
} 
} 