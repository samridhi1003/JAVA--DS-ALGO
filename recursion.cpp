#include<iostream>
using namespace std;

void subsequence(string ques,string ans)
{
    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    string roq=ques.substr(1);
    subsequence(roq,ans);
    subsequence(roq,ans+ques[0]);

}

int main(int arga,char** argb){
    subsequence("abc"," ");
}
    