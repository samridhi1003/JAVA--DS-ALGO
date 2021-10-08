#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

 int dir[][2]={{0,1},{0,-1},{1,0},{-1,0}};
int ans=0;
int RatM( vector<vector<int>>& grid,int r,int c,int n)
{
    if(r==n-1 && c==n-1) 
    {
         ans++;
         return 1;
   }
    grid[r][c]=1;
    int count=0;
    for(int d=0;d<4;d++)
    {
        int nr=r+dir[d][0];
        int nc=c+dir[d][1];
        if(nr>=0 && nc>=0 && nr<n && nc<n && grid[nr][nc]==0)
        count+=RatM(grid,nr,nc,n);
    }
    grid[r][c]=0;
    return count;
}
int tempMaze[11][11];
int paths;
void traverseMaze(vector<vector<int>>& maze,int i,int j,int n)
{
	if(i == n-1 && j == n-1)
	{
        cout<<"jjk";

		++paths; 
		return;
	}

	if(maze[i+1][j] == 0 && tempMaze[i+1][j] != 1 && i+1 <= n-1)
	{
		tempMaze[i][j]=1;
		traverseMaze(maze,i+1,j,n);
		tempMaze[i][j]=0;
	}
	if(maze[i][j+1] == 0 && tempMaze[i][j+1] != 1 && j+1 <= n-1)
	{
		tempMaze[i][j]=1;
		traverseMaze(maze,i,j+1,n);
		tempMaze[i][j]=0;
	}
	if(maze[i-1][j] == 0 && tempMaze[i-1][j] != 1 && i-1 >= 0)
	{
		tempMaze[i][j]=1;
		traverseMaze(maze,i-1,j,n);
		tempMaze[i][j]=0;
	}
	if(maze[i][j-1] == 0 && tempMaze[i][j-1] != 1 && j-1 >= 0)
	{
		tempMaze[i][j]=1;
		traverseMaze(maze,i,j-1,n);
		tempMaze[i][j]=0;
	}
	
	return;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n,0));
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //    { cin>> grid[i][j];
    //     			tempMaze[i][j]=0;}

    // }
    // cout<<RatM(grid,0,0,n)<<"\n";
    // cout<<ans;
    // paths=0;
	// traverseMaze(grid,0,0,n);
	// cout<<paths<<"jj"<<endl;
    int a=sqrt(5);
    cout<<a;

}
