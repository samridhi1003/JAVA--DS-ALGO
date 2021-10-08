#include<iostream>
#include<vector>
using namespace std;
#define vs vector<string>
#define vss vector<vs>
#define vi vector<int>
#define vii vector<vi>
void display2(vi &dp)
{
    for (int ele : dp)
        cout << ele << " ";
    cout << endl;
}
      
            
void display(vii &dp)
{
    for(vi ar:dp)
    {
        for(int ele:ar)
        cout<<ele<<" ";
        cout<<endl;
    }
    cout<<endl;
}
int mazepath(int sr,int sc,int er,int ec,vii &dp)
{ 
 if (sc==ec && sr==er)
 {
    dp[sr][sc]=1;
     return 1;

 }
 int count =0;
 if(dp[sr][sc]!=0) return dp[sr][sc];
 if(er==ec && dp[sc][sr]!=0)
 return dp[sc][sr];
   
    if(sc+1<=ec) 
        count+= mazepath(sr,sc+1,er,ec,dp);
    if(sr+1<=er)
        count+= mazepath(sr+1,sc,er,ec,dp);
    if(sc+1<=ec && sr+1<=er)
        count+= mazepath(sr+1,sc+1,er,ec,dp);
   
    dp[sr][sc]=count;
    if(er==ec)
        dp[sc][sr]=count;
    return count;
  
}
int mazepath2(int er,int ec,vii &dp)
{
    for(int sr=er;sr>=0;sr--)
    {
        for(int sc=ec;sc>=0;sc--)
        {
            if(sr==er&& sc==ec)
            {
                dp[sr][sc]=1;
                continue;
            }
            int count=0;
            if(sr+1<=er)
            count +=dp[sr+1][sc];
            if(sc+1<=ec)
            count+=dp[sr][sc+1];
             if(sc+1<=ec && sr+1<=er )
            count+=dp[sr+1][sc+1];
            dp[sr][sc]=count;
        }
    }
    return dp[0][0];
}
int mazePathMulti_01(int sr, int sc, int er, int ec, vii &dp)
{
    if (sr == er && sc == ec)
    {
        dp[sr][sc] = 1;
        return 1;
    }

    if (dp[sr][sc] != 0)
        return dp[sr][sc];

    int count = 0;
    for (int jump = 1; sr + jump <= er; jump++)
        count += mazePathMulti_01(sr + jump, sc, er, ec, dp);
    for (int jump = 1; sc + jump <= ec; jump++)
        count += mazePathMulti_01(sr, sc + jump, er, ec, dp);
    for (int jump = 1; sr + jump <= er && sc + jump <= ec; jump++)
        count += mazePathMulti_01(sr + jump, sc + jump, er, ec, dp);

    dp[sr][sc] = count;
    return count;
}

int mazePathMulti_02(int er, int ec, vii &dp)
{

    for (int sr = er; sr >= 0; sr--)
    {
        for (int sc = ec; sc >= 0; sc--)
        {
            if (sr == er && sc == ec)
            {
                dp[sr][sc] = 1;
                continue;
            }

            int count = 0;
            for (int jump = 1; sr + jump <= er; jump++)
                count += dp[sr + jump][sc];
            for (int jump = 1; sc + jump <= ec; jump++)
                count += dp[sr][sc + jump];
            for (int jump = 1; sr + jump <= er && sc + jump <= ec; jump++)
                count += dp[sr + jump][sc + jump];

            dp[sr][sc] = count;
        }
    }
    return dp[0][0];
}
int boardpath(int start,int end,vi& dp)
{
    if(start==end)
    {
        dp[start]=1;
        return 1;
    }
    if(dp[start]!=0) return dp[start];
    int count=0;
    for(int dice=1;dice<=6;dice++)
    {
        if(start+dice<=end)
        {
        count+=boardpath(start+dice,end,dp);
        }
    }
    dp[start]=count;
    return count;
}
//===================(set2)================
int pairnsingle(int n,vi&dp)
{

    if(n<=1)
    { 
        dp[n]=1;
        return 1;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int singleway=pairnsingle(n-1,dp);
    int pairways=pairnsingle(n-2,dp)*(n-1);
    dp[n]=singleway+pairways;
    return dp[n];
}
int pairnsingle2(int n,vi&dp)
{
    for(int i=0;i<=n;i++)
    {
       
        if(n<=1)
        { 
            dp[i]=1;
            return 1;
        }
        ////////////////inccomplete==========================
        int singleway=dp[i-1];
        int pairways=dp[i-2]*(i-1);
       
        return dp[i];
    
    }
}

int countpair2(int n,int k,vii& dp)
{
     if (n == 0 || k == 0 || k > n) 
     return 0; 
    if( k==1||k==n)
    {
        dp[n][k]=1;
        return 1;
    }
    if(dp[n][k]!=0)
    {
        return dp[n][k];
    }
  
     int single=countpair2(n-1,k,dp)*k;
    int pair=countpair2(n-1,k-1,dp);
    dp[n][k]=single+pair;
    return dp[n][k];

}
int countpair(int n,int k,vii& dp)
{
      
for (int i = 1; i <= n; i++) 
     for (int j = 1; j <= i; j++) 
       if (j == 1 || i == j) 
          dp[i][j] = 1; 
       else
          dp[i][j] = j * dp[i - 1][j] + dp[i - 1][j - 1]; 
  
  return dp[n][k];
}
vii dirarr{{0,1},{-1,1},{1,1}};
int goldmine(int x,int y,vii &arr,vii& dp)
{
    if(y==arr[0].size()-1)
    {
        dp[x][y]=arr[x][y];
        return arr[x][y];
    }////////////////////////===============incomplete================================
    if(dp)
    int maxans=-1e7;
    for(int d=0;d<3;d++)
    {
        int r=x+dirarr[d][0];
        int c=y+dirarr[d][1];
        if(r>=0&& c>=0;r<arr.size()&&c<arr[0].size())
        {
            minans=max(maxans,goldmine(r,c,arr,dp));
        }
        dp[x][y]=maxans+arr[x][y];
    }
    int upward=goldmine()
    int right=
    int downward=
}
int maxsqans=0;

int maxsq(int r,int c,vii& arr,vii& dp){
    if(r==arr.size()|| c=arr[0].size())
    {
        return 0;
    }
    if(dp[r][c]!=0)
    {
        return dp[r][c];
    }
    int down=maxsq(r+1,c.arr,dp);
    int dia=maxsq(r+1,c+1,arr,dp);
    int right=maxsq(r,c+1,arr,dp);
    int minans=0;
    if(arr[r][c]==1)
    {
       minans= min(down,min(dia,right))+1;
    }   
    dp[r][c]=minans;
    maxsqans=max(dp[r][c],maxsqans);
    return dp[r][c];
    
}
tilefloor()//////missing==================
int coinchange(vi& arr,int idx,int target,vi& dp)
{
    if(idx==arr.size()||target==0)
    {
        if(target==0)
        {
        // cout<<ans<<endl;
        return dp[target]=1;
        
        }
         return 0;
    }
    int count=0;
    for(int i=idx;i<arr.size();i++)
    {
        if(target-arr[i]>0)
        {
            count+=coinchange(arr,i,target-arr[i],dp));

        }
        return dp[target]=count;
    }
}
void targetype()
{
    vi& arr={2,3,5,7};
    int target=10;
    vi& dp(target+1,0)
}
void set2(){
    int n=5;
   int k=2;
    vii dp(n+1,vi(k+1,0));
    // vi dp(n+1,0);
    // cout<<pairnsingle2(n,dp)<<endl;
    cout<<countpair2(n,k,dp)<<endl;
}

void set1(){
int n=10;

// vii dp(n,vi(n,0));
vi dp(n+1,0);
// cout<<mazepath(0,0,n-1,n-1,dp)<<endl;
// cout<<mazepath2(n-1,n-1,dp)<<endl;
//  cout << mazePathMulti_01(0, 0, n - 1, n - 1, dp) << endl;
    // cout << mazePathMulti_02( n - 1, n - 1, dp) << endl;
    cout<<boardpath(0,n,dp)<<endl;
display2(dp);
}
int main(){
    // set2();
    targetype();
    return 0;
}