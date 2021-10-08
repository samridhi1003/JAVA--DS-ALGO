import java.util.ArrayList;
class multiPath
{
    public static ArrayList<String> maze_01(int board[][],int i,int j)
    {
        if(i==board.length-1 && j==board[0].length-1)
        {
             ArrayList<String> base=new ArrayList<String>();
             base.add("");
             return base;
        }
        ArrayList<String> myans=new ArrayList<String>();
        for(int jumpX=1;i+jumpX<board.length;jumpX++)
        {
            
            
            ArrayList<String> vans=maze_01(board,i+jumpX,j);
             for(String s:vans)
             myans.add("V"+jumpX+s);
                

        }
          for(int jumpY=1;j+jumpY<board[0].length;jumpY++)
        {
           
            ArrayList<String> hans=maze_01(board,i,j+jumpY);
             for(String s:hans)
             myans.add("H"+jumpY+s);
               
        }
       
         return myans;


    }
     public static int maze_02(int board[][],int i,int j,String ans)
    {
        if(i==board.length-1 && j==board[0].length-1)
        {
            
             System.out.print(ans+"  ");
            return 1;
        }
        int count=0;
        for(int jumpY=1;i+jumpY<board.length;jumpY++)
        count+=maze_02(board,i+jumpY,j,ans+"H"+jumpY);
        for(int jumpY=1;j+jumpY<board[0].length && i+jumpY<board.length;jumpY++)
        count+=maze_02(board,i+jumpY,j+jumpY,ans+"D"+jumpY);
        for(int jumpY=1;j+jumpY<board[0].length;jumpY++)
        count+=maze_02(board,i,j+jumpY,ans+"V"+jumpY);
        
        

        return count;
    }
    public static int maze_02_(int board[][],int i,int j,String ans)
    {
        if(i==board.length-1 && j==board[0].length-1)
        {
            
             System.out.print(ans+"  ");
            return 1;
        }
        int count=0;
        for(int jumpY=1;j+jumpY<board[0].length || i+jumpY<board.length;jumpY++)
        {
            if(i+jumpY<board.length)
        count+=maze_02(board,i+jumpY,j,ans+"H"+jumpY);
        if(j+jumpY<board[0].length && i+jumpY<board.length)
        count+=maze_02(board,i+jumpY,j+jumpY,ans+"D"+jumpY);
        if(j+jumpY<board[0].length)
        count+=maze_02(board,i,j+jumpY,ans+"V"+jumpY);
        
        }

        return count;
    }
      public static void main(String args[])
    {
        
        int board[][]=new int[4][4];
        // ArrayList<String> ans=maze_01(board,0,0);
        // System.out.println(ans);
        // System.out.println(ans.size());

        System.out.println(maze_02(board,0,0,""));
    System.out.println(maze_02_(board,0,0,""));
    }
}
