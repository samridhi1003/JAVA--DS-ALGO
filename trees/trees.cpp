// #include<iostream>
// #include<vector>
// #include<stack>
// vector<int>store=new vector<int>;
// node construct(vector<int>&data)
// {
//     stack<node*>st;
//     node*root=null;
//     for(int i=o;i<data.size();i++)
//     {
//         int val=data[i];
//         if(val==-1){
//             stack.pop();
//         }
//         else
//         {
//             node*nn=new node(val);
//             if(st.size()==0)
//             {
//                 root==nn;
//             }
//             else{
//                 node*top=st.top();
//                 if(top->left==null)
//                 {
//                     stack.push(data[i]);
//                     top->left=data[i];
//                 }
//                 else(top->right==null)
//                 {
//                      stack.push(data[i]);
//                     top->right=data[i];

//                 }
//             }
//             return root;
//         }
//     }
// }
// //============================================================(display)
// void display(node*root)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     if (root->left!=NULL)
//     {
//         cout<<root->left->data<<"->";
//     }
//     else
//     {
//         cout<<"--->";
//     }
//     cout<<"["<<root->data<<"]";
//     if(root->right!=NULL)
//     {
//         cout<<"<---"<<root->right->data;
//     }
//     else
//     {
//         cout<<"<---";
//     }
//     cout<<endl;
//     display(root->left);
//     display(root->right);
// }
// //=================================================(find)
// bool find(node* root)
// {
//     if (root=NULL)
//     return false;
//     else if(root==data)
//     {
//         return true;
//     }
//     bool lr=find(root->left);
//     bool rr=find(root->right);
//     return lr||rr;
// }
// //=========================================(kdown)
// int kdown(node* root,k)
// {
//     if(k==0)
//     {
//         cout<<root;
//         return ;//return root;
//     }
//      if(root==NULL)
//      return;
//      kdown(node*root.left,k-1);
//      kdown(node*root.right,k-1);
    
// }
// //======================================(kfar)
// void kfar(node*root,int data,int k)
// vector<node*>n2rp=ntrp(root,data);
// for(int i=0;i<k&& i<n2rp->size();i++)
// {
//     printdown(n2pr->at(i);i==0?NULL:n2rp->at(i-1);k-1);
// }
// if(root->left==NULL&& root->right!=NULL)
// {
//     cout<<root;
// }
// else if(root->left!=NULL&&root->right==NULL)
// cout<<root; 
// //==============================================
// int ntrp_(int root,int dest)
// {
//     bool isfind=false;
//     if(root==dest)
//     {
//         isfind=true;
//         return;
//     }
//     else if(root==NULL)
//     {
//         return;
//     }
    
//     if(!isfind)
//     ntrp_(root.left,dest);
//     if(!isfind)
//     {
//     ntrp_(root.right,dest);
//     }
//     store.push(root);
//     cout<<store;
// }
// //=======================
// kfar(int n,int k)
// {
//    vector<int>path= ntrp_( root,n);//yaha se hmare paas store return krwalo
//    for(int i=0;i<path.size();i++)
//    {
//       int a= kdown(path[i],k-i);
//       cout<<a<<endl;
//    }
// }




#include<bits/stdc++.h>
  #include<vector>
  using namespace std;
  
  // TreeNode class for a node of a Binary Search Tree
  class node {
      public:
  	  int data;
  	  node* left;
  	  node* right;
  
  	  node(int x) {
  	  	  data = x;
  	  	  left=NULL;
  	  	  right=NULL;
  	  }
  	  friend class Pair;
  };
  class Pair
  {
      public:
      int state;
      node*n;
      
      Pair()
      {
          
      }
      Pair(node*nn,int s)
      {
          n=nn;
          state=s;
      }
  };
  // utility function to display a binary tree
  void display(node* rt) {
      if (rt == NULL) {
          return;
      }
      cout<<rt->data<<"->";
      if(rt->left!=NULL)
      cout<<rt->left->data<<", ";
      
      //cout<<" <= "<<rt->data<<" => ";
      
      if(rt->right!=NULL)
      cout<<rt->right->data;
      
  
      cout<<endl;
  
      display(rt->left);
      display(rt->right);
  }
   
  node*construct(int a[],int size)
  {
    stack<Pair> s;
    node*root=new node(a[0]);
    Pair temp(root,1);
    s.push(temp);
    for(int i=1;i<size;i++)
    {
        Pair onTop;
        onTop=s.top();
        
        if(onTop.state==1)
        {
            if(a[i]!=-1)
            {
                node*no=new node(a[i]);
                onTop.n->left=no;
                
                Pair toBeAdded(no,1);
                s.push(toBeAdded);
            }
            else
            {
                onTop.n->left=NULL;
            }
            onTop.state++;
        }
        else if(onTop.state==2)
        {
            if(a[i]!=-1)
            {
                node*no=new node(a[i]);
                onTop.n->right=no;
                
                Pair toBeAdded(no,1);
                s.push(toBeAdded);
            }
            else
            {
                onTop.n->right=NULL;
            }
            onTop.state++;
        }
        else
        {
            s.pop();
            i--;
        }
        
    }
    
    return root;
    
  }
  /*node*construct()
  {
      int d;
      cin>>d;
      
      if(d==-1)
      return NULL;
      
      node*n=new node(d);
      n->left=construct();
      n->right=construct();
      
      return n;
  }*/
  int main(int argc, char** argv){
      // length of array representing the tree
      //int len;
    //  cin>>len;
  
      
      int a[]={2,5,3,-1,-1,6,-1,-1,4,7,-1,-1,8,-1,-1};
     // node* root=levelOrder(arr);
      node*root;
      root = construct(a,15);
      display(root);
  }