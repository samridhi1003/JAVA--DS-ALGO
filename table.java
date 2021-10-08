import java.util.Scanner;
class table{
    public static void main(String args[])
    {
        Scanner scn=new Scanner(System.in);
        System.out.println("enter which table to be printd");
        int n=scn.nextInt();
          
    for(int i=1;i<=10;i++){
        System.out.println(i*n);
    }
    }
}