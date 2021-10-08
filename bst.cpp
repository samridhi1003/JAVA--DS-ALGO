#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class node{
    public:
    int data=0; 
    node* left=NULL;
    node*right=NULL;
    node(int data)
    {
        this->data==data;
         this->left==left;
          this->right==right;
    } 
};
    node* construct(vector<int>&data)
    {
        stack<node*>st;
        node* root =NULL;
        for(int i=0;i<data.size();i++)
        {
            int val=data[i];
            if (val==-1)
            {
                st.pop;
            }
            else{
                node* nn=new node(val);
                if(st.size()==0)
                {
                    root=nn;
                    
                }
                else
                {
                node*top=st.top();
                if(top->left==NULL)
                {
                    top->left=nn;
                }    
                else
                {
                    top->right=nn;
                }
                }
            }
        st.push;
        }

    }
 

void display(node*root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL)
    {
        cout<<root->left->data<<"--->";
    }
    else{
        cout<<"--->";
    }
    cout<<"["<<root->data<< " ]";
    if(root->right!=NULL)
    {
        cout<<"<---"<<root->right->data;
    }
    else{
        cout<<"<---";
    }
    cout<<endl;
    display(root->left);
    display(root->right);
    //========================================================================(single child wale parents)
    // if(root->left==NULL&& root->right!=NULL)
    // {
    //     cout<<root;
    // }
    // if(root->left!=NULL&& root->right==NULL)
    // {
    //     cout<<root;
    // }
}
// ===================================================================================(addnode


int main(int args,char** argb)
{
    vector<int>data{10,20,40,-1,-1,30,50,-1,60,-1,-1,-1};
    node*root=construct(data);
    display(root);
}