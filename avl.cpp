#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data=0;
    Node* left=NULL;
    Node*right=NULL;
    int height;
    int balance;
    Node(int data,Node*left,Node*right)
    {
        this->data==data;
         this->left==left;
          this->right==right;
          this->height==height;
          this->balance==balance;
    }
}; 
//display

//get height
int getheight(Node* root)
{
    if(root==NULL)
       return 0;
    

//   int lh=  getheight(root->left);
//  int rh=getheight(root->right);
int lh=-1;
int rh=-1;

if(root->left!=NULL) lh=root->left->height;
if(root->right!=NULL) lh=root->right->height;

 return std::max(lh,rh)+1;
}

//get balance
int getbalance(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

//   int lb=  getbalance(root->left);
//  int rb=getbalance(root->right);
int lh=-1; 
int rh=-1;
if(root->left!=NULL) lh=root->left->height;
if(root->right!=NULL) lh=root->right->height;

 return lh-rh;
}
void updatefactors(Node* root)
{
    root->height=getheight(root);
    root->balance=getbalance(root);
}
void left_rotation()
{
Node* node ;

}



