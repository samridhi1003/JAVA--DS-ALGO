#include<iostream>
using namespace std;

string words[]={",.:;","abc","def","ghi","jkl","mno","qrs","tuv","wx","yz","/@$","&*","?!"};
void keypad(string ques,string ans)
{
    if (ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    int idx1=ques[0]-'0';
    string word=words[idx1];
   for(int i=0;i<word.length();i++)
   {
       keypad(ques.substr(1),ans+word[i]);
   }
   //10110 case
   if(ques.length()>=2)
   {
       int idx2= idx1*10+(ques[1]-'0');
       if(idx2==10||idx2==11)
       {
           string word=words[idx2];
           for(int i=0;i<word.length();i++)
           {
               keypad(ques.substr(2),ans+word[i]);
           }
       }
   }

}
int main(int arga,char** argb)
{
    keypad("1011"," ");
}