#include <iostream>
using namespace std;
int main(int args,char** argb){
    int n;
    cout<<"enter no. of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=n-i;j<=n;j++){
            cout<<"*";
        }

        cout<<endl;
    }


}