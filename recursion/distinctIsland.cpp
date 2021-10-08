#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

string dfs(int i,int j,vector<vector<int>>& grid)
{
       int n=grid.size();  
        int m=grid[0].size();
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)
    {
      
        return "o";
    }
    grid[i][j]=0;
    string up="u"+dfs(i-1,j,grid);
     string r="R"+dfs(i,j+1,grid);
     string d="D"+dfs(i+1,j,grid);
     string l="L"+dfs(i,j-1,grid);
return up+r+d+l;
}
int distinctIsland(vector<vector<int>>& grid)
{   unordered_set<string> set;
    int n=grid.size();
    int m=grid[0].size();

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(grid[i][j]==1)
        {
          
            string ans="x"+dfs( i,j,grid);

            cout<<ans<<endl;
            set.insert(ans);
        }
    }
    return set.size();
}
int main()
{
    vector<vector<int>> grid{
    {1,1,0,0,1},
    {1,0,0,0,0},
    {0,0,1,0,0},
    {1,1,0,1,1},
    {1,0,0,0,1}};
    cout<<distinctIsland(grid);

}