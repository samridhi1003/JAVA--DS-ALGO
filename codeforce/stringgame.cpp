import java.io.* ;
import java.util.* ;
// import java.lang.Math;
public class stringgame
{
    public static void main(String args[])throws NumberFormatException, IOException
    {   
        Stack<char> st=new Stack<>();
        String str=scn.nextLine();
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(st.size()==0)
            {
               st.push(str.charAt(i)) ;
            }
            else{
                if(st.peek==str.charAt(i)){
                    st.pop();
                    count++;
                }
                else{
                    st.push(str.charAt(i)
                }
            }
        }
        if(count%2==1)
                System.out.println("Yes");
                System.out.println("No");
             
    }
}
