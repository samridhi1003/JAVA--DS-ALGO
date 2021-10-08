#include<iostream>
#include<vector>
using namespace std;

void perm(string ques,string ans)
{
    vector<bool>vis(26,0);
    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<ques.length();i++)
    {
        if(vis[ques[i]-'a']==false)
        {
            vis[ques[i]-'a']=true;;
        string roq=ques.substr(0,i)+ques.substr(i+1);
        perm(roq,ans+ques[i]);
        }
    }
}
int main(int arga,char** argb)
{
    perm("aba"," ");
}