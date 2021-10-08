import java.io.* ;
import java.util.* ;
class btree{
    public static class TreeNode{
        int data;
        TreeNode left;
        TreeNode right;
        
    }
     public static class pair{
         TreeNode node;
         int state;

     }    
     public static void main(String args[]){
         int []arr ={12,1,3,-1,-1,4,-1,-1,4,3,-1,-1,7,5,-1,-1,6,-1,-1};
        buildBtree(arr);
     }
     
     public static void buildBtree(int[]arr){
            Stack<pair> st=new Stack<>();
            TreeNode root=new TreeNode();
            root.data=arr[0];
            pair temp =new pair();
            temp.node=root;
            temp.state=1;
            st.push(temp);
            for(int i=1;i<arr.length;i++){
                pair ontop=st.peek();
                if(ontop.state==1){
                    if(arr[i]!=-1){
                        TreeNode leftnode=new TreeNode();
                        leftnode.data=arr[i];
                        ontop.node.left=leftnode;
                        pair tobeadded=new pair();
                        tobeadded.node=leftnode;
                        tobeadded.state=1;
                        st.push(tobeadded);
                        
                    }
                    else{
                        ontop.node.left=null;
                    }
                    ontop.state++;
                }
                else if(ontop.state==2){
                    if(arr[i]!=-1){
                        TreeNode rightnode=new TreeNode();
                        rightnode.data=arr[i];
                        ontop.node.right=rightnode;
                        pair tobeadded=new pair();
                        tobeadded.node=rightnode;
                        tobeadded.state=1;
                        st.push(tobeadded);
                        
                    }
                    else{
                        ontop.node.right=null;
                    }
                    ontop.state++;
                }
                else{
                    // state==3 hogi to kuch or krenge
                   
                    st.pop();
                    i--; 
                    // st.peek();
                    
                }

            }
           display(root);  
     }
     public static void display(TreeNode node){
         if (node == null)
            return;
         System.out.print(node.data+" -->");
         if(node.left!=null){
            System.out.print(node.left.data+",");
         }else{
             System.out.print("null,");
         }
          if(node.right!=null){
            System.out.print(node.right.data);
         }else{
             System.out.print("null");
         }
         System.out.println();
        display(node.left); // display(2*idx+1);
        display(node.right); // display(2*idx+2);
     }
     
    
}