#include<iostream>
#include<vector>
#define vector<int>vi;
#define vector<vi>vvi;
#define vector<bool>vb;
#define vector<vb>vvb;
using namespace std;
int queencombi(vector<bool>& box,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=lqpl;i<box.size();i++)
    {
        count+=queencombi(box,i+1,tnq,qpsf+1,ans+'b'+to_string(i)+'q'+to_string(qpsf));
    }
    return count;
}

int queenpermu(vector<bool>& box,vector<bool>& vis,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<box.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
        count+=queenpermu(box,vis,i+1,tnq,qpsf+1,ans+'b'+to_string(i)+'q'+to_string(qpsf));
        vis[i]=false;
        }
    }
    return count;
}
//subsequence
int queencombi_02(vector<bool> box,int lqpl,int tnq,int qpsf,string ans)
{
    if(tnq==qpsf || lqpl==box.size())
    {
        if(tnq==qpsf)
        {
            cout<<ans<<endl;
            return 1;
        }
        return 0;
    }
    int count=0;

    count+=queencombi_02(box,lqpl+1,tnq,qpsf+1,ans+'b'+to_string(lqpl)+'q'+to_string(qpsf));
    count+=queencombi_02(box,lqpl+1,tnq,qpsf,ans);
    return count;
}

//subsequence
int queenpermu_02(vector<bool> box,vector<bool>& vis,int lqpl,int tnq,int qpsf,string ans)
{
    if(tnq==qpsf || lqpl==box.size())
    {
        if(tnq==qpsf)
        {
            cout<<ans<<endl;
            return 1;
        }
        return 0;
    }
    int count=0;
    if(!vis[lqpl])
    {
        vis[lqpl]=true;
    count+=queenpermu_02(box,vis,0,tnq,qpsf+1,ans+'b'+to_string(lqpl)+'q'+to_string(qpsf));
      vis[lqpl]=false;
    }

    count+=queenpermu_02(box,vis,lqpl+1,tnq,qpsf,ans);
    return count;
}
//2d array mein place krni h queens
int queencombi2D(vector<vector<bool>>& box,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=lqpl;i<box.size()*box[0].size();i++)
    {
      int  x=i/box[0].size();
      int   y=i%box[0].size();
        count+=queencombi2D(box,i+1,tnq,qpsf+1,ans+"("+to_string(x)+','+to_string(y)+")");
    }
    return count;
}
//========================
int queenpermu2D(vector<bool>& box,vector<bool>& vis,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<box.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
        count+=queenpermu2D(box,vis,i+1,tnq,qpsf+1,ans+'b'+to_string(i)+'q'+to_string(qpsf));
        vis[i]=false;
        }
    }
    return count;
 }
// bool isSafe(vector<vector<bool>>&box,int r,int c)
// {
//    vector<vector<int>> dir={{0,-1},
//                    {-1,-1},
//                    {-1,0},
//                    {-1,1}
//                    };
//     for(int i=0; i<dir.size();i++)
//     {
//         for(int rad=1;rad<max(r,c);rad++)
//         {
//            int nx=r+rad*dir[i][0];
//            int ny=c+rad*dir[i][1];
//            if(nx<0 ||ny<0|| nx>=box[0].size() ||ny>=box[0].size());
//            if(box[nx][ny]) return false;
           
//         }
//     }
//     return true;

// }
// int Nqueen(vector<vector<bool>>& box,int lqpl,int tnq,int qpsf,string ans)
// {
//     if(qpsf==tnq)
//     {
//         cout<<ans<<endl;
//         return 1;
//     }
//     int count=0;
//     for(int i=lqpl;i<box.size()*box[0].size();i++)
//     {
//        int  x=i/box[0].size();
//       int   y=i%box[0].size();
//       if(isSafe(box,x,y))
//       {
//           box[x][y]=true;

//           count+=Nqueen(box,i+1,tnq,qpsf+1,ans+"("+to_string(x)+','+to_string(y)+")");
//         box[x][y]=false;
//       }
//     }
//     return count;
// }
//(permutation n queen)=============================

bool isSafe(vector<vector<bool>>&box,int r,int c)
{
   vector<vector<int>> dir={{0,-1},
                   {-1,-1},
                   {-1,0},
                   {-1,1},
                   {0,1},{1,1},{1,0},{1,-1}
                   };
    for(int i=0; i<dir.size();i++)
    {
        for(int rad=1;rad<max(r,c);rad++)
        {
           int nx=r+rad*dir[i][0];
           int ny=c+rad*dir[i][1];
           if(nx<0 ||ny<0|| nx>=box[0].size() ||ny>=box[0].size());
           if(box[nx][ny]) return false;
           
        }
    }
    return true;

}
int Nqueen(vector<vector<bool>>& box,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<box.size()*box[0].size();i++)
    {
       int  x=i/box[0].size();
      int   y=i%box[0].size();
      if(isSafe(box,x,y))
      {
          box[x][y]=true;

          count+=Nqueen(box,i+1,tnq,qpsf+1,ans+"("+to_string(x)+','+to_string(y)+")");
        box[x][y]=false;
      }
    }
    return count;
}
//==========================================
bool isSafe(vector<vector<bool>>&box,int r,int c)
{
    
 if(!ver(c) && !diag(r+c) && !anti())
 
        
    return true;

}
int Nqueen(vector<vector<bool>>& box,int lqpl,int tnq,int qpsf,string ans)
{
    if(qpsf==tnq)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count=0;
    for(int i=lqpl;i<box.size()*box[0].size();i++)
    {
       int  x=i/box[0].size();
      int   y=i%box[0].size();
      if(isSafe(box,x,y))
      {
          box[x][y]=true;

          count+=Nqueen(box,i+1,tnq,qpsf+1,ans+"("+to_string(x)+','+to_string(y)+")");
        box[x][y]=false;
      }
    }
    return count;
}

int main(int arga,char** argb)
{
    // vector<bool> box(5,0);
   vector<vector<bool>>box(4,vector<bool>(4,false));
   // vector<bool> vis(5,0);
    // cout<<queencombi(box,0,3,0,"");
    // cout<<queenpermu(box,vis,0,3,0,"");
   // cout<<queenpermu_02(box,vis,0,3,0,"");
//    cout<<queencombi2D(box,0,4,0,"");
//    cout<<queenpermu(box,vis,0,3,0,"");
 cout<<Nqueen(box,0,4,0,"");
}