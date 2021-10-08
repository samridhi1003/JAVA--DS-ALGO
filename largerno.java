// import java.util.Scanner;
// class largerno{
//     public static void main(String args[])
//     {
//         Scanner scn=new Scanner(System.in);
//         System.out.println("enter a:");
//         int a=scn.nextInt();
//          System.out.println("enter b:");
//         int b=scn.nextInt();
//          System.out.println("enter c:");
//         int c=scn.nextInt();
        
//         if (a>b && a>c)
//     {
//         System.out.println("greatest no. is a:"+a);
//         }
//          else if (b>a && b>c)
//          {
//         System.out.println("greatest no. is b:"+ b);
//           } 
//           else{
//         System.out.println("greatest no. is c:"+ c);
//           }
        
//     }
// }
/* Read input from STDIN. Print your output to STDOUT*/

import java.io.*;
import java.util.*;

public class largerno {
  
    public static void ConnectedCities(int[][]arr,int i,int j, boolean[][] visited,ArrayList<Integer> bag)
      {
         if(arr[i][j]==0 || i<0||j<0 ||i>=arr.length || j>=arr[0].length ||visited[i][j]==true){
            return;
         }
         visited[i][j]=true;
         bag.add(arr[i][j]);
         ConnectedCities(arr,i-1,j,visited,bag);
         // System.out.print(max);
         ConnectedCities(arr,i,j+1,visited,bag);
         ConnectedCities(arr,i+1,j,visited,bag);
         ConnectedCities(arr,i,j-1,visited,bag);
         ConnectedCities(arr,i-1,j-1,visited,bag);
         ConnectedCities(arr,i-1,j+1,visited,bag);
         ConnectedCities(arr,i+1,j+1,visited,bag);
         ConnectedCities(arr,i+1,j-1,visited,bag);
      }

         public static void getCities(int[][] arr)
       {
          int r=arr.length;
          int c =arr[0].length;
         boolean[][] visited = new boolean[r][c];
         for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               if(arr[i][j]!=0 && visited[i][j]== false){
                  ArrayList<Integer> bag= new ArrayList<>();
                  
                  ConnectedCities(arr,i,j,visited,bag);
                  int sum=0;
                  for(int val: bag){
                     sum= sum+val;
                  }
                  System.out.println(sum);
                  if(sum>max){
                     max=sum;
                     // System.out.print(max);
                  }
               }
            }
            
         }
        
         
       }
       static int max = 0;
   public static void main(String args[] ) throws Exception {

	//Write code here
   Scanner scn= new Scanner(System.in);
   int R =scn.nextInt();
   System.out.print(" ");
   int C =scn.nextInt();
   int[][] arr= new int[R][C];
         for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
               arr[i][j]=scn.nextInt();
               System.out.print(" ");
            }
            System.out.println();
         }
  
   getCities(arr);
   System.out.print(max);
 }
     
}
