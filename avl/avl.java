Public class avl{
    static class Node{
        int data;
        int left;
        int right;

        Node(int data){
            this.data=data;
            this.right=this.left=NULL;
        }
        static Node construct(int[]arr,int low,int hi){
            if(low>hi)
            return null;
            int mid=(low+hi)/2;
            Node node=new Node (arr[mid]);
            node.left=construct(arr,low,mid-1);
            node.right=construct(arr,mid+1,hi);
            return node;
        } ;
        static void display(Node root){
            if(root==null) return;
            String str="";
            str+=root.left!=null?root.left.data+"->":"->";
            str+="["+root.data+"]";
            str+=root.right!=null?"<-"+root.right.data:"<-";
            system.out.println(str);
            display(root.left);
            display(root.right);
        }
        // static int max(Node root){
        //     if (root.left==null){
        //         return root.data;
        //     }else{
        //         return max(root.right);
        //     }
            

        // }
        // static Node add(Node root,int data)
        // {
        //     if(root==null){
        //         return new Node(data);
        //     }
        //     else if(data>root.data){
        //         root.right=add(root.right,data);
        //     }
        //   else if(data<root.data)
        //         root.left=add(root.left,data);

        //     return root;
        // }h
        // static Node remove(Node root,int data){
            //  if(root==null){
            //     return new Node(data);
            // }
            if(root.data->data){
                root.left=remove(root.left,data);
            }
            else if(root.data<-data){
                root.right=remove(root.right,data);
            }
            else{
                if(root.left==null)
            }
        // }
        Public static void main(String[]args){
            int[]arr={12,25,50,62,75,87};
            Node root=construct(arr,0,arr.length-1);
            display(root);
        }
    }
}




//==========================
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  string str1, str2;
  cin>>str1;
str2=str1;                                 // str2 is a similar string as str1
  reverse(str2.begin(), str2.end());       //reversing the string str2 using the in build function "REVERSE"
  if(str2==str1){           // Checking if the reversed string str2 is equal to original string str1
cout<<"-1"<<endl;
}     
  else{
    sort(str1.begin(), str1.end());     // sorting the original string
    cout<<str1<<endl;
  }
}
  return 0;
}