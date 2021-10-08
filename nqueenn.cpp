#include<iostream>
#include<vector>
#define vector<int>vi;
#define vector<vi>vvi;
#define vector<bool>vb;
#define vector<vb>vvb;
using namespace std;
int Nqueen(int row,int tnq,string ans,vb&col,vb&diag,vb&anti)
{
    n=col.size();
    if(row==box.size || tnq==0)
    {
    if(tnq==0)
    {
        cout<<ans<<endl;
        return 1;
    }
    return 0;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
       if(!col(y) && !diag(x+y) && !anti(x-y+n-1))
      {
          box[x][y]=true;

          count+=Nqueen(row+1,tnq-1,ans+"("+to_string(x)+','+to_string(y)+")", col, diag, anti);
        box[x][y]=false;
      }
    }
    return count;
}

int main(int arga,char** argb)
{
    
   vector<vector<bool>>box(4,vector<bool>(4,false));
   vb&col(4,0);
     vb&diag(7,0);
      vb&anti(7,0);
 cout<<Nqueen(0,4,0,"", col,diag,anti);
}