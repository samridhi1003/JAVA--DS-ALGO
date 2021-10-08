#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class Edge
{
public:
    int v = 0;
    int w = 0;

    Edge(int v, int w)
    {
        this->v = v;
        this->w = w;
    }
};

int n = 7;
vector<vector<Edge *>> graph(n, vector<Edge *>());


void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (Edge *e : graph[i])
        {
            cout << "(" << e->v << ", " << e->w << ") ";
        }
        cout << endl;
    }
}

void addEdge(int u, int v, int w)
{
    if (u < 0 || v < 0 || u >= n || v >= n)
        return;

    graph[u].push_back(new Edge(v, w));
    graph[v].push_back(new Edge(u, w));
}

void constructGraph()
{
    addEdge(0, 1, 10);
    addEdge(0, 3, 10);
    addEdge(1, 2, 10);
    addEdge(2, 3, 40);
    addEdge(3, 4, 2);
    addEdge(4, 5, 2);
    addEdge(4, 6, 3);
    addEdge(5, 6, 8);
    addEdge(2,5,10);
    addEdge(5,7,10);
    addEdge(6,8,10);
    // addEdge(0,6,8);
    // display();
    // cout << endl;
}

// void removeEdge(int u, int v)
// {
//     int i = 0;
//     while (i < graph[u].size())
//     {
//         Edge *e = graph[u][i];
//         if (e->v == v)
//         {
//             break;
//         }
//         i++;
//     }

//     int j = 0;
//     while (j < graph[v].size())
//     {
//         Edge *e = graph[v][j];
//         if (e->v == u)
//         {
//             break;
//         }
//         j++;
//     }

//     graph[u].erase(graph[u].begin() + i);
//     graph[v].erase(graph[v].begin() + j);
// }

// void removeVtx(int u)
// {
//     while (graph[u].size() != 0)
//     {
//         Edge *e = graph[u][graph[u].size() - 1];
//         removeEdge(u, e->v);
//     }
// }
// void haspath(int src,int dest,vector<bool>&vis,string ans)
// {
//     if(src==dest)
//     {
//         cout<<ans<<endl;
       
//     }
//     vis[src]=true;
//      for(Edge *e:graph[src])
//     {
//          if(!vis[e->v])
         
//           haspath(e->v,dest,vis,ans+to_string(e->v));
         
//     }
    
// }
// void allpath(int src,int dest,vector<bool>&vis,int wt,string ans)
// {
//     if(src==dest)
//     {
//         cout<<ans+" @ "+to_string(wt)<<endl;
//         return ;
//     }
//     vis[src]=true;
//      for(Edge *e:graph[src])
//     {
//          if(!vis[e->v])
         
//           allpath(e->v,dest,vis,wt+e->w,ans+to_string(e->v));
         
//     }
//     vis[src]=false;
    
// }
//========================================
int swsf=1e8;
string spsf="";
int lwsf=-1;
string lpsf="";


void allsol(int src,int dest,vector<bool>& vis,int wsf,string psf)
{
    if(src==dest)
    {
        psf= psf + to_string(dest);
        
       if(wsf<swsf)
       {
           swsf=wsf;
           spsf=psf;
       }
       if(wsf>lwsf)
       {
           lwsf=wsf;
           lpsf=psf;
       }
        
    return;
    
    }
    vis[src]=true;
     for(Edge *e:graph[src])
    {
         if(!vis[e->v])
         
          allsol(e->v,dest,vis,wsf+e->w,psf+to_string(src)+"->");
         
    }
    vis[src]=false;
    
}
//=============================================================================
//bfs()=========================
// void bfs(int src,int dest,vector<bool>&vis)
// {
//      int cycle=0;
//     int level=0;
//     queue<int>que;
//     que.push(src);
//     que.push(-1);
//     while(que.size()!=1)
//     {
        
//             int rvtx=que.front();
//             que.pop();
//             if(rvtx==-1)
//             {
//                 level+=1;
//                 que.push(-1);
//                 continue;
//             }
//             if(vis[rvtx])
//             {
//                 cout<<"cycle"<<++cycle<<" @ "<<level<<endl;
//                 continue;
//             }
//             if(rvtx==dest && !vis[rvtx])
//             {
//                 cout<<"destination found in min edge  "<<rvtx<<" @ "<<level<<endl;
//                 vis[rvtx]=true;
//             }
//             vis[rvtx]=true;
//              cout<<rvtx<<endl;
//             for(Edge *e:graph[rvtx])
//             {
                
//                  if(!vis[e->v])
//                  {
//                     que.push(e->v);
                        
//                  }
               
//             }
            
        
         
//     }
// }
// void bfs2(int src,int dest,vector<bool>&vis)
// {
//     int cycle=0;
//     int level=0;
//     queue<int>que;
//     que.push(src);
    
//     while(que.size()!=0)
//     {
//         int size=que.size();
//         while(size-- > 0)
//         {
//             int rvtx=que.front();
           
//             que.pop();
        
//             if(vis[rvtx])
//             {
//                 cout<<"cycle"<<++cycle<<" @ "<<level<<endl;
//                 continue;
//             }
//             if(rvtx==dest && !vis[rvtx])
//             {
//                 cout<<"destination found in min edge  "<<rvtx<<" @ "<<level<<endl;
//                 vis[rvtx]=true;
//             }
//             vis[rvtx]=true;
//              cout<<rvtx<<endl;
//             for(Edge *e:graph[rvtx])
//             {
                
//                     if(!vis[e->v])
//                     {
//                         que.push(e->v);
                        
//                     }
                
               
//             }
            
//         }
//          level++;
//     }
// }
// int hametonian(int vtx ,int oscr,int vtxcount,vector<bool>&vis,string ans)
// {
//     if(vtxcount==graph.size()-1)
//     {
//         bool flag=false;
//         for(Edge *e:graph[vtx])
//         {
//             if(e->v==oscr)
//             {
//                 cout<<"cycle"<<ans<<to_string(vtx)<<endl;
//                 flag=true;
                
//             }
//         }
//         if(!flag)
//         cout<<"path:"<<ans<<to_string(vtx)<<endl;
//         return 1;
//     }
//     vis[vtx]=true;
//     int count=0;
//     for(Edge *e :graph[vtx])
//     {
//         if(!vis[e->v])
//         count+=hametonian(e->v,oscr,vtxcount+1,vis,ans+to_string(vtx)+" ");
//     }
//     vis[vtx]=false;
//     return count;
// }
// class pair()
// {
//     public:
//     int vtx = -1;
//     int mark = 0;

//     pair(int vtx, int vtx)
//     {
//         this->vtx = vtx;
//         this->mark = mark;
//     }

// };
// int bipartite(int src,)
// {
//     queue<pair<int,int>>que;
//     que.push(src);
// while(que.size()!=0)
// {
//     pair<int,int>rvtx=que.front;
//     que.pop();
//     if(vis[rvtx].first()!=-1)
//     {
//         if(vis[rvtx.first]!=rvtx.second)
//         {
//             cout<<"conflict"<<endl;
//             flag=false;
//             continue;
//         }
//         vis[rvtx.first]=rvtx.second;
//         for(Edge *e=graph(src))
//          {
//              que.push(e->v);
//          }

         
//     }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                n                                       
// // }

//=====================================(bipartite2)
void bipartate(int src,int src_clr,vector<bool>&vis,vector<int>&set,int vtxcnt)
{
    bool flag=true;
    vis[src]=true;

    if(vtxcnt==graph.size()+1)
        return;
    
    for(Edge *e: graph[src])
    {
        if(set[e->v]==0)
        {
            set[e->v]=((src_clr==1)?2:1);
            
        }
        else
        {
            flag=(set[e->v]==set[src])?false:true;
        }
        if(!flag)
        return;
        if(!vis[e->v])
        {
            cout<<src<< " "<<src_clr<<" "<<set[e->v]<<endl;
        bipartate(e->v,set[e->v],vis,set,vtxcnt+1);
        }

    }
}
// void topologicalsort()
// {
//     vector<bool>visited(graph.size(),false);
//     vector<int>stack;
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])/ 
//         topologicalsort(i,visited,stack);
//     }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
//     while(stack.size()!=0)
//     {
//         cout<<stack.back()<<" ";
//         stack.pop_back();
//     }
// }
// bool topologicalsort(int scr,,vector<bool>&vis,vector<bool>&cycledetection)
// {
//     vis[src]=true;
//     cycledetection[src]=true;
//     bool res=false;
//     for(Edge *e:graph[src])
//     if(!vis[e->v])
//     res=res||topology(e->v,vis,stack);
//     else if(cycledetection[e->v])
//     return true;
//     stack.push_back(src);
//     cycledetection[src]=false; 
//     return res;
// }




//=============================(DSU)=====================
// void merge(int par1,int par2,vector<int>&par,vector<int>&size)
{
    if(size[p1]<size[p2])
    {
        par[p1]=p2;
        size[p2]+=size[p1];

    }
    else
    par[p2]=p1;
    size[p2]=p1;
     size[p1]+=size[p2];

}
int find(int vtx,vector<int>&par)
{
    if(par[vtx]==vtx) return vtx;
    par[vtx]=find par[par[vtx]];
}
void solve()
{
    
    //    removeEdge(3,4);
   
    //   haspath(0,6,vis,to_string(0) + "");
      
    //allpath(0, 6, vis, 0, to_string(0) + "") ;
    
    
   
}
int main(int args,char** argb)
{    
    constructGraph();
    vector<bool> vis(n, false);
     vector<int> set(n, 0);
    // allsol(0, 6, vis, 0, "");
    // cout << spsf << " @ " << swsf << endl;
    // cout << lpsf << " @ " << lwsf << endl;
    //  cout<<hametonian(0,0,0,vis," ")<<endl;
    // topologicalsort(0,vis,false);
    // bfs2(0,6,vis);
    // bfs2(0,6,vis);
    bipartate(0,1,vis,set,0);
    return 0;
}
 