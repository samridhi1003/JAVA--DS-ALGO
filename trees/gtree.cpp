#include <iostream>
#include<stack>
#include<vector>
using namespace std;
class Node
{
    public:
    int data=0;
    vector<Node*> childs ;
    Node()
    {

    }
    Node(int data)
    {
        this->data=data;
    }
};
Node* createtree(vector<int>& arr)
{
    stack<Node*> st;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]!=-1)
        {
        Node  *node=new Node(arr[i]);
        st.push(node);
        }
    
        else
        {
            Node *node=st.top();
            st.pop();

            st.top()->childs.push_back(node);
        }
    }    
    return st.top();
}
void display(Node *node)
{
    cout<<node->data<<"->";
    for(Node *child: node->childs)
    {
        cout<<child->data<<",";
    }
    cout<<endl;
     for(Node *child: node->childs)
    {
       display(child);
    }
    
}
int size(Node *node)
{
    int sz = 0;
    for (Node *child : node->childs)
    {
        sz += size(child);
    }
    return sz + 1;
}
int height(Node *node)
{
    int h = -1;
    for (Node *child : node->childs)
    {
        h = max(h, height(child));
    }
    return h + 1;
}
int maximum(Node *node)
{
    int maxdata = node->data;
    for (Node *child : node->childs)
    {
        maxdata = max(maxdata, maximum(child));
    }
    return maxdata;
}
bool find(Node *node,int data)
{
    bool res = false;
    if (node->data == data)
        return true;

    for (Node *child : node->childs)
    {
        res = res || find(child,data);
    }
    return res;
}
 Node *gettail(Node *node)//n2 time complexity!!!!
 {
     if(node->childs.size()==0)
     {
         return node;
     }
     return gettail(node->childs[0]);
 }
 void lineartree(Node *node)
 {
     for(Node *child:node->childs)
     {
         lineartree(child);
     }
     for(int i=node->childs.size()-2;i>=0;i--)
     {
        Node* tail= gettail(node->childs[i]);
        tail->childs.push_back(node->childs[i+1]);
        node->childs.pop_back();
         
     }
 }
 ////linearise 2
 Node *linearize_02(Node *node)
{
    if (node->childs.size() == 0) //tail.
        return node;

    Node *myTail = linearize_02(node->childs.back());
    for (int i = node->childs.size() - 2; i >= 0; i--)
    {
        Node *tail = linearize_02(node->childs[i]);
        tail->childs.push_back(node->childs.back());

        node->childs.pop_back();
    }

    return myTail;
}
bool isSymmetric(Node *node1, Node *node2)
{
    if (node1->childs.size() != node2->childs.size())
        return false;

    for (int i = 0, j = node2->childs.size() - 1; i <= j; i++, j--)
    {
        Node *child1 = node1->childs[i];
        Node *child2 = node2->childs[j];

        if (!isSymmetric(child1, child2))
            return false;
    }

    return true;
}
bool isTreeSymmetric(Node *node1, Node *node2)
{
    if (node1->childs.size() != node2->childs.size() || node1->data != node2->data)
        return false;

    for (int i = 0, j = node2->childs.size() - 1; j >= 0; i++, j--)
    {
        Node *child1 = node1->childs[i];
        Node *child2 = node2->childs[j];

        if (!isTreeSymmetric(child1, child2))
            return false;
    }

    return true;
}

int main()
{
    vector<int>arr={10,20,50,-1,60,-1,-1,30,70,-1,80,100,-1,110,-1,-1,90,-1,-1,40,-1,-1};
    Node *node=createtree(arr);
  cout<< arr.size();
    // lineartree(node);
    // display(node);
    return 0;
}