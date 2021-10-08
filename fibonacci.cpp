#include <iostream>
using namespace std;
int main(int args,char** argb){
    int n,n1=0,n2=1,i,k;
    cout<<"enter natural no  "<<endl;
    cin>>n;
    if(n==1){
        cout<<n1;
    }
    else if(n==2){
        cout<<n1<<n2<<endl;
        cout<<"last fibbonacci is "<<n2;
        }
        else {
            cout<<"0"<<"1";
            for( i=1;i<=n-2;i++){
                 k=n1+n2;
                cout<<k;
                n1=n2;
                n2=k;
            }
           cout<< endl;
            cout<<"last fibonacci is "<<k;
        }
        
    }
