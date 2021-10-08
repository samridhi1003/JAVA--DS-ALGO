public class trees{

    public static class Node{
        int data = 0;
        Node left = null;
        Node right = null;

        Node(int data){
            this.data = data;
        }
    }
     public static int size(Node node){
        return node==null?0:size(node.left) + size(node.right) + 1;
    }

    public static int height(Node node){
        return node==null ? -1 : Math.max(height(node.left,node.right)) + 1;
    }

    public static boolean find(Node node,int data){
        if(node==null) return false;

        if(node.data == data) return true;

        return find(node.left,data) || find(node.right,data);
    }

   public static boolean nodeToRootPath(TreeNode node,int data,ArrayList<TreeNode> ans){
        if(node==null) return false;
        
        if(node.val == data){
            ans.add(node);
            return true;
        }
        
        boolean res = nodeToRootPath(node.left,data,ans) || nodeToRootPath(node.right,data,ans);
        if(res){
            ans.add(node);
        }
        
        return res;
    }

    public static boolean rootToNodePath(Node node,int data,ArrayList<Node> ans){
        if(node==null) return false;
        
        if(node.data == data){
            ans.add(node);
            return true;
        }

        ans.add(node);
        boolean res = nodeToRootPath(node.left,data,ans) || nodeToRootPath(node.right,data,ans);
        if(!res){
            ans.remove(ans.size()-1);
        }
        
        return res;
    }

    public static ArrayList<Node> nodeToRootPath(Node node,int data){
        if(node==null) return null;

        if(node.data == data){
            ArrayList<Node> base = new ArrayList<>();
            base.add(node);
            return base;
        }

        ArrayList<Node> left = nodeToRootPath(node.left,data);
        if(left!=null){
            left.add(node);
            return left;
        }

        ArrayList<Node> right = nodeToRootPath(node.right,data);
        if(right!=null){
            right.add(node);
            return right;
        }

        return null;
    }

}