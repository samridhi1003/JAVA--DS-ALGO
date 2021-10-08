#include<iostream>
#include<vector>
using namespace std;
int xa[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
int ya[] =  { -2, 2, -2, 2, -1, 1, -1, 1 };
void display( vector<vector<int>>& grid)
{
    for(vector<int> v:grid)
    {
        for(int el:v)
        cout<<el<<" ";

        cout<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
}
int ans=0;
void knights( vector<vector<int>>& grid,int n,int r,int c,int count)
{
    if(count==n*n)
    {
        grid[r][c]=count;
        ans++;
        display(grid);
        grid[r][c]=0;

        return;
    }
    
    grid[r][c]=count;
    for(int d=0;d<8;d++)
    {
        int newr=r+xa[d];
        int newc=c+ya[d];
        if(newr<n && newc<n && newr>=0 && newc>=0 && grid[newr][newc]==0)
           knights(grid,n,newr,newc,count+1); 
    }
    grid[r][c]=0;

}
int main()
{
    int n=5;
    vector<vector<int>> grid(n,vector<int>(n,0));
     knights(grid,n,0,0,1);
     cout<<ans;
}