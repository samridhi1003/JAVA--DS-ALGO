def traverse(graph, checkif, curr,  st, n,psf):
    if curr==n-1:
        psf.append(st.copy())
        st.pop()
        return psf, st
    else:
        checkif[curr] = 1
        for ele in graph[curr]:
            if checkif[ele] == 0:
                st.append(ele)
                psf, st = traverse(graph, checkif, ele, st, n, psf)
        st.pop()
        return psf, st

n, m, t, c = map(int, input().split())
visited = [0 for _ in range(n)]
graph = [[] for _ in range(n)]


for _ in range(m):
    a,b = map(int, input().split())
    graph[a-1].append(b-1)
    graph[b-1].append(a-1)

path, _ = traverse(graph, visited, 0, [0], n, [])

path.sort(key=lambda x:len(x))

minute = 0
l = len(path[0])
for i in range(1, l):
    minute += c
    if i==l-1:
        break
    else:
        dummy = minute//t
        if dummy%2==1:
            minute = (dummy+1)*t

print(minute)

//=============================================================
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> memory[1001];
vector<pair<ll,vector<ll>>> pt;

void DepthSearch(ll start,ll end,ll visitedear[],vector<ll> rs,ll w){
   rs.push_back(start);
   if(start == end){
       pt.push_back({w*(rs.size()-1),rs});
       return;
   }
   for(auto u : memory[start]){
       if(visitedear[u] == 0){
          visitedear[start] = 1;
          DepthSearch(u,end,visitedear,rs,w);
          visitedear[start] = 0;
       }
   }
}

int main()
{
    ll n,m,t,c,u,v;
    cin>>n>>m>>t>>c;
    while(m--){
        cin>>u>>v;
        memory[u].push_back(v);
        memory[v].push_back(u);
    }
    vector<ll> rs;
    ll w = c;
    ll visitedear[n+1] = {0};
    DepthSearch(1,n,visitedear,rs,w);
    sort(pt.begin(),pt.end());
    vector<ll> rt[n+1];
    for(int i=0;i<pt.size();i++){
        ll nes = pt[i].second.size();
        for(auto u : pt[i].second){
            rt[u].push_back(nes);
        }
    }
    ll vec[n+1] = {0};
    vec[1] = 1;
    vec[n] = 1;
    for(int i=2;i<=n-1;i++){
        if(rt[i].size() > 0){
            ll tm = rt[i][0];
            ll up = upper_bound(rt[i].begin(),rt[i].end(),tm) - rt[i].begin();
            vec[i] = up;
        }
    }
    for(int i=1;i<=n;i++)
    cout<<vec[i]<<" ";
    return 0;
}

//==========================================================
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
#define int         long long int

vector<int> ret;  // ans as res

int not_visited(int x, vector<int>& path)
{
    int sz = path.size();
    for (int i = 0; i < sz; i++)
        if (path[i] == x)
            return 0;
    return 1;
}


void trivendrum(vector<vector<int> >&g, int src,
                                 int dst, int v)
{
    queue<vector<int> > q;

    vector<int> path;
    path.push_back(src);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
 
        if (last == dst)
        {
            ret.push_back(path.size());   
        }
 
        for (int i = 0; i < g[last].size(); i++) {
            if (not_visited(g[last][i], path)) {
                vector<int> newpath(path);
                newpath.push_back(g[last][i]);
                q.push(newpath);
            }
        }
    }
}
void sol_tri(){
           
        
      int n,m,t,c;

      cin >>n>>m>>t>>c;

      vector<vector<int>> graph(n+1);

      while(m--)
      {
         int u,v;
         cin >>u>>v;

         graph[u].push_back(v);
         graph[v].push_back(u);

      }

    trivendrum(graph , 1 , n , n);
   // errA(ans);

  int res = 0;
  //cout<<ans[1]<<endl;

  vector<int> ans1;

  sort(ret.begin() , ret.end());

  ans1.push_back(ret[0]);

  for(int i=1;i<ret.size();i++)
  {
     if(ret[i]!=ret[i-1])
        ans1.push_back(ret[i]);
  }

  if(ans1.size()<2)
  {
     cout<<-1<<endl;
     return;
  }


   for(int i=1;i<ans1[1];i++)
   {
      
        int x = res/t;

        if(x%2!=0)
        {
            
            res = ((int)res/t + 1)*t;
         
        }

      res += c;
   }

   cout<<res<<endl;


}

signed main()
{
    ios_base::sync_with_stdio(0); 
     cin.tie(0); cout.tie(0);

      sol_tri();

    return 0;

}


//============================================================
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
vector<vector<Edge *>> graph(n, vector<Edge *>());
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

 void haspath(int src,int dest,vector<bool>&vis,string ans)
{
    if(src==dest)
    {
        cout<<ans<<endl;
       
    }
    vis[src]=true;
     for(Edge *e:graph[src])
    {
         if(!vis[e->v])
         
          haspath(e->v,dest,vis,ans+to_string(e->v));
         
    }
    
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

//==============
PriorityQueue<Pair>pq = new PriorityQueue<>();
pq.add(new Pair(src,scr+"",0));
boolean[]visited=new boolean[vtces];
while (pq.size()>0){
    Pair rem =pq.remove();
    if(visited[rem.v]==true){
        continue;
    }
    visited[rem.v]=true;
    Syso(rem.v+"via"+rem.psf+@+rem.wsf);
    for(Edge e :graph[rem.v]){
        if(visited[e.nbr]==false){
            pq.add(new Pair(e.nbr,rem.psf+e.nbr,rem.wsf+e.wt));

        }
    }
}

public static class Pair implements Comparable<Pair>{
    int v;
    String psf;
    int wsf;
    Pair(int v,String psf,int wsf){
        this.v=v;
        this.psf=psf;
        this.wsf=wsf;

    }
    public int compareTo(Pair o){
        return this.wsf-o.wsf;
    }
}

//=======================
// Java program to implement
// the above approach
import java.util.*;
class GFG
{

// Function to calculate
// score of parentheses
static long scoreOfParentheses(String S)
{
	Stack<String> s = new Stack<>();

	// Stores index of
	// character of String
	int i = 0;

	// Stores total scores
	// obtained from the String
	long ans = 0;

	// Iterate over characters
	// of the String
	while (i < S.length())
	{

	// If s[i] is '('
	if (S.charAt(i) == '(')
		s.add("(");
	else
	{

		// If top element of
		// stack is '('
		if (s.peek() == "(")
		{
		s.pop();
		s.add("1");
		}
		else
		{

		// Stores score of
		// inner parentheses
		long count = 0;

		// Calculate score of
		// inner parentheses
		while (s.peek() != "(")
		{

			// Update count
			count += Integer.parseInt(s.peek());
			s.pop();
		}

		// Pop from stack
		s.pop();

		// Insert score of
		// inner parentheses
		s.add(String.valueOf(2 * count));
		}
	}

	// Update i
	i++;
	}

	// Calculate score
	// of the String
	while (!s.isEmpty())
	{

	// Update ans
	ans += Integer.parseInt(s.peek());
	s.pop();
	}
	return ans;
}

// Driver Code
public static void main(String[] args)
{
	String S1 = "(()(()))";
	System.out.print(scoreOfParentheses(S1) +"\n");
}
}

// This code is contributed by 29AjayKumar.
pu