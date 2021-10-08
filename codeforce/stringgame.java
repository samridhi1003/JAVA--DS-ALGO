import java.io.* ;
import java.util.* ;
// import java.lang.Math;
public class stringgame
{
    public static void main(String args[])
    {   
        Stack<Character> st=new Stack<>();
        Scanner scn=new Scanner(System.in);
        String str=scn.nextLine();
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(st.size()==0)
            {
               st.push(str.charAt(i)) ;
            }
            else{
                if(st.peek()==str.charAt(i)){
                    st.pop();
                    count++;
                }
                else{
                    st.push(str.charAt(i));
                }
            }
        }
        if(count%2==1)
                System.out.println("Yes");
                else
                System.out.println("No");
             
    }
}








================================================================================
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public TreeNode addOneRow(TreeNode t, int v, int d) {
        if (d == 1) {
            TreeNode n = new TreeNode(v);
            n.left = t;
            return n;
        }
        insert(v, t, 1, d);
        return t;
    }

    public void insert(int val, TreeNode node, int depth, int n) {
        if (node == null)
            return;
        if (depth == n - 1) {
            TreeNode t = node.left;
            node.left = new TreeNode(val);
            node.left.left = t;
            t = node.right;
            node.right = new TreeNode(val);
            node.right.right = t;
        } else {
            insert(val, node.left, depth + 1, n);
            insert(val, node.right, depth + 1, n);
        }
    }
}
