
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
public class BinaryTree{
     public static void main(String[] args) {
         int[] pre={10,20,40,50,60,30,70,90,80};
         int[] in ={40,20,60,50,10,70,90,30,80};
         int[]post={40,60,50,20,90,70,80,30,10};
        
    }
public static Node prein(int[]pre,int[]in,int ps,int pe,int is,int ie)
{
    if(ps<=pe|| is<=ie)
    {
        return null;
    }
    Node node=new Node(pre[ps]);
    int idx=is;
    while(idx<=ie)
    {
        if(in[idx]==pre[ps]) break;
        idx++;
    }
    int tne=idx-is;
    node.left=prein(pre,in,ps+1,ps+tne,is,idx-1);
    node.right=prein(pre,in,ps+tne+1,pe,idx+1,ie);
    return node;
}
//===========================================================================================
public static Node postin(int[]post,int[]in,int ps,int pe,int is,int ie)
 {
    if(ps<=pe|| is<=ie)
    {
        return null;
    }
    Node node=new Node(post[pe]);
    int idx=is;
    while(idx<=ie)
    {
        if(in[idx]==post[pe]) break;
        idx++;
    }
    int tne=idx-si;
    // int tne=ie-idx;
    // int tne2=idxz-si;
    // node.right=postin(post,in,pe-tne,pe-1,idx+1,ie);
    // node.left=postin(post,in,ps,ps+tne2,is,idx-1);
    node.right=postin(post,in,ps,ps+tne,idx+1,ie);
    node.left=postin(post,in,ps+tne+1,pe,is,idx-1);
    
    return node;
 }

}
// =================================================================================
static int prev=Integer.MIN_VALUE;
public static boolean isBST(Node curr)
{
    if(curr==null)return true;
   
    boolean left=isBST(curr.left);
    
    if(!left) return false;
     
    if (prev<curr.data)ppprev=curr.data;
     else return false;
     boolean right==isBST(curr.right);
     if(!right) return false;
     return true;
}
public static int diameter_01(Node node)
{
    int lh=height(node.left);
    int rh=height(node.right);
    return Math.max(Math.max(ld,rd),lh+rh+1);

}
public static class diapair{
    int height=0;
    int dia=0;

}
public static diapair diameter_02(Node  node)
{
    if (node==null) return new diapair();
    diapair left=diameter_02(node.left);
    diapair right=diameter_02(node.right);
    diapair mypair=new diapair();
    mypair.height=Math.max(left.height,right.height)++1;
    mypair.dia=Math.max(Math.max(left.dia,right.dia),left.height+right.height+1);

    return mypair;
}
//=================================================

public static void add leaf_01(Node node,int par,int leaf,boolean isleft)
{
    if(node==null) return null;
    if(node data==par)
    {
        if(isleft) node.left=newNode(leaf);
        else node.right=ne Node(left);

    }
    addleaf_01(node.left,par,leaf,isleft);
    addleaf_01(node.right,par,leaf,isleft);

} 


//=========================================================================



