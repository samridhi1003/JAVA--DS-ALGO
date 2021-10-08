#include<iostream>
#include<vector>
using namespace std;

void coinchange(int amt,vector<int>& arr,string ans)
{
    if(amt==0)
    {
        cout<<ans<<endl;
        return;
    }
    if(amt<0)
    {
        return;
    }
    for(int i=0;i<arr.size();i++) {
        coinchange(amt-arr[i],arr,ans+to_string(arr[i]));
    }
}
// infinite combination=================================================================================
// void coinchange(int amt,vector<int>& arr,string ans,int idx){
//     if(amt==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     if(amt<0)
//     {
//         return;
//     }
//     for(int i=idx;i<arr.size();i++) {
//         coinchange(amt-arr[i],arr,ans+to_string(arr[i]),i);
//     }
// }
//combination with single coin============================================================================
// void coinchange(int amt,vector<int>& arr,string ans,int idx){
//     if(amt==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     if(amt<0)
//     {
//         return;
//     }
//     for(int i=idx;i<arr.size();i++) {
//         coinchange(amt-arr[i],arr,ans+to_string(arr[i]),i+1);
//     }
// }
//single coin permutation=============================================================================
// void coinchange(int amt,vector<int>& arr,string ans,vector<bool>& vis){
//     if(amt==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     if(amt<0)
//     {
//         return;
//     }
//     for(int i=0;i<arr.size();i++) {
//         if(amt-arr[i]>=0 && !vis[i])
//         {
//             vis[i]=true;
//         coinchange(amt-arr[i],arr,ans+to_string(arr[i]),vis);
//         vis[i]=false;
//         }
//     }
// }
//(infinite combinations)======================================================================================
// void coinchange(int amt,vector<int>& arr,string ans,int i)
// {
//     if(amt==0 || i==arr.size() )
//    { 
//        if(amt==0)
//         {
//         cout<<ans<<endl;
//         return;
//         }
//         return;
//    }
//     if(arr[i]<=amt)
//     {
       
//         coinchange(amt-arr[i],arr,ans+to_string(arr[i]),i);
//     }   
//      coinchange(amt,arr,ans,i+1);
// }
// =========\=============================================================================

// void coinchange(int amt,vector<int>& arr,string ans)
// {
//     if(amt==0 || i==arr.size() )
//    { 
//        if(amt==0)
//         {
//         cout<<ans<<endl;
//         return;
//         }
//         return;
//    }
//    
//    
//     if(arr[i]<=amt)
//     {
       
//         coinchange(amt-arr[i],arr,ans+to_string(arr[i]));
//     }   
//    
//    
//      coinchange(amt,arr,ans);
   
// }

int main(int arga,char** argb)
{
//  vector<bool>vis(4,false);
    vector<int>ar={2,3,5,7};
    coinchange(10,ar," ");
}