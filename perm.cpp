#include<iostream>
using namespace std;
void perm(string ques,string ans)
{
    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<ques.length();i++)
    {
        string roq=ques.substr(0,i)+ques.substr(i+1);
        perm(roq,ans+ques[i]);
    }
}
int main(int arga,char** argb)
{
    perm("abc"," ");
}