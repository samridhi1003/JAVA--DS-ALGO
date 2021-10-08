#include <iostream>
using namespace std;
int main(int args,char** argb){
    int n,n2,i,r,x ,mul=1,div=1,n1;
    cout<<"enter n"<<endl;
    cin>>n1;
    n=n1;

  //  while(n>0){
   //     n=n/10;
        
   //     i++;
 //   }
 for(i=0;n1>0;i++){
     n1=n1/10;
 }
    cout<<"no. of digits="<<i<<endl;

cout<<"enter the rotation"<<endl;
cin>>r;

 if(r<0){
 r=r+i;
}
if(r>i){
r=r%i;
}

for( int x=1;x<=i;x++){
    if(x<=r){
        mul*=10;
    }
    else{
        div*=10;
    }
    }
    n2= n % div;
    n=n/div;
    n2=n2*mul;
    int cs= (n2+n) ;
    cout<<"rotated no is "<< cs;



}