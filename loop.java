import java.util.Scanner;
class loop{
    public static void main(String args[])
    {
        Scanner scn=new Scanner(System.in);
        System.out.println("enter n");
        int n=scn.nextInt();
          
    for(int i=0;i<=n;i++){
        System.out.println(i);
    }
    }
}


#include <stdio.h>
#include <math.h>

 int main()  
{
 unsigned int i,n, in[10], z[10],rem, rev=0;
 //printf("Enter the value of n\n");
 //scanf("%d",&n);
 //printf("Enter the input values\n");
   n=sizeof(in)/sizeof(in[0]);
 for(i=0;i<n;i++)
 {
  scanf("%u",&in[i]);
 }

   for(i=0;i<n;i++)
   {
        while(in[i]!=0)
        {
         rem=in[i] % 10;
         rev=rev*10 +rem; 
         in[i]=in[i]/10; 
         z[i]=rev;
        }
   }
 for(i=0;i<n;i++)
 {
  printf("%u",z[i]+",");
 }
 return(0);
}