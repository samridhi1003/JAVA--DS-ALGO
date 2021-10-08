import java.io.* ;
import java.util.* ;
public class crossword{
public static void main(String args[]){
    Scanner scn=new Scanner(System.in);
     int T=scn.nextInt();
    for(int j=0;j<T;j++){
        int n=scn.nextInt();
        int []arr=new int[4];
        for(int i=0;i<4;i++){
            arr[i]=scn.nextInt();
            if(arr[i]>n){
                System.out.println("No");
            }
        }
        for(int i=0;i<4;i++){
            
            if(i==0)
            {
                if(arr[i]==1){
                    arr[i+1]-=1;
                }
                if(arr[i]==2){
                    arr[i+1]-=1;
                    arr[4]-=1;
                }
                
                if(arr[i+1]<0|| arr[4]<0){
                    System.out.println("No");
                    break;
                }

            }
            
            if(i==1|| i==2 ){
                if(arr[i]==1){
                    arr[i+1]-=1;
                }
                        if(arr[i+1]<0){
                        System.out.println("No");
                        break;
                    }
                }
             
               if(i==3){
                        arr[i-1]-=1;
                        if(arr[i-1]<0){
                            System.out.println("No");
                            break;
                        }
                        
                }

            

                if (i==3){
                     System.out.println("yes");
                } 
        }       
                
            
           
            
        }

        
        
        
    }

}
