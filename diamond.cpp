#include <iostream>
using namespace std;
int main(int args,char** argb)
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int star=1,space=n/2;
    for(int i=1;i<=n;i++){
        for(int cs=1;cs<=space;cs++){
            cout<<" ";
        }
        for(int st=1;st<=star;st++){
            cout<<"*";
        }
        cout<<endl;
        if(i<=n/2){
            space--;
            star=star+2;
        }
        else
       { star-=2;
        space++;
    }
    }
}