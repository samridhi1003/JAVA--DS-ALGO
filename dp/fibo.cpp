#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>
#define vii vector<vi>
void display(vi &dp)
{
    for (int ele : dp)
        cout << ele << " ";
    cout << endl;
}
int fibo_1(int n ,vector<int>&dp)
{
    if(n<=1)
    {
        dp[n]=n;
        return dp[n];
    }
    if(dp[n]!=0)
    return dp[n];
    int ans=fibo_1(n-1,dp)+fibo_1(n-2,dp);
    return dp[n]=ans;
}
int fibo_2(int n,vector<int>&dp)
{
    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            dp[i]=i;
            continue;
        }
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
void set1(){
int n=10;
vector<int>dp(n+1,0);
cout<<fibo_1(n,dp)<<endl;
display(dp);
}


int main(){
    set1();
    return 0;
}