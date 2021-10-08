#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data=0;
    Node* left=NULL;
    Node*right=NULL;
    Node(int data,Node*left,Node*right)
    {
        this->data==data;
         this->left==left;
          this->right==right;
    }
}; 
Node create(vector<int>arr,int si,int ei)
{
    if(si>ei) return NULL;
    int mid=* (si+ei) >>1;
        Node* node= new Node(arr[mid]);
        Node ->left=create(arr,si,mid-1);
         Node ->right=create(arr,mid+1,ei);
        return node;
}
Node max(vector<int>arr,int si,int ei)
{
Node* maximum=MAX(ar)
}
Node solve()
{
     vector<int>arr={10,20,30,40,50,60,70,80,90,100,110,120};
     Node root=create(arr,0,arr.size()-1);
}
// =========================================================================addnode
void addNode(Node*node,Node*par,int dara,bool isleft)
{
if(node==NULL)
{
    Node*child=new Node(data);
    if(isleft)
    par->left=child;
    else
    
        par->right=child;
        return;   
}
if(node->data<data)
addnode(node->right,node,data,false);
else
addnode(node->left,node,data,true);
}
// ================================================================================================
subtract()
{
    if(node->freq>1)
    {
        node->left==NULL||node->right==NULL;
        {
            Node*n=node->left!=NULL?node->left:node->right;
            delete node;
            return n;
        }
    }
    int max=maximum(node->left);
    node->data=max;
    node->left=deteleNode(node->left,max)
}
int main(int args,char** argb)
{
    solve();
}