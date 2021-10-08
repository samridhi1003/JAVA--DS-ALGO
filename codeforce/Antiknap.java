import java.io.* ;
import java.util.* ;
public class Antiknap
{
    public static void main(String args[])
    {
        Scanner scn=new Scanner(System.in);
        int T=scn.nextInt();
        for(int j=0;j<T;j++)
        {
            int n=scn.nextInt();
            int k=scn.nextInt();
          
                String ans1= subset(1,"",n, k,0);
                // System.out.println(ans1);
                // String ans2= subset(i,"");
                //   System.out.println(ans2);
         }
     }
    
     public static String subset(int i,String s,int n, int k,int sum){
         int max= Integer.MIN_VALUE;
         if(sum==k){
             return " ";
         }
         if(i==k+1){
             if(s!=""){
                s= s.substring(0, s.length() - 1); 
            //   return " ";
             }
             
             
         }
         if(i==n+1){
             
             if(s.length()>max && s!=" "){
                 max=s.length();
                 
                 System.out.println(max);
                 System.out.println(s);
                  return s;
             }
             
             return s;
         }
         
        
              String ans1= subset(i+1,s+i,n, k,sum+i);
                //  System.out.println(ans1);
                if(ans1 != ""){
                    return ans1;
                }
              String ans2=subset(i+1,s,n, k,sum);
              if(ans2 != ""){
                    return ans2;
                }
            //   System.out.println(ans2);

         
        
         return new String("");
        
     }

}