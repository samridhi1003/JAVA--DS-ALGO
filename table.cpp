#include <iostream>
using namespace std;
int main(int args,char** argb){
    int i,n;
    cout<<"enter which table to be print "<<endl;
    cin>>n;
    for(i =1;i<=10;i++){
        int k=i*n;
        cout<<k<<endl;
    }
}
