#include <iostream>
using namespace std;
int main(int args,char** argb){
    int a,b,c;
    cout<<"enter three no.s";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"greatest no. is a:"<<a;
        }
         else if (b>a && b>c)
         {
        cout<<"greatest no. is b:"<<b;
          } 
          else{
        cout<<"greatest no. is c"<<c;
          }

    
}