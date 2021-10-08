#include <iostream>
using namespace std;

int main(int args,char** argb){
      int n ;
    cout<<"enter length of array \n";
    cin>>n;
    int ar[n];
    cout<<endl<<"enter array elements in terms of 0 and 1 \n";

for(int i=0;i<n;i++){
    cin>>ar[i];

}
cout<<endl<<"elements of array are : \n";
for(int i=0;i<n;i++){
    cout<<ar[i];
}
cout<<endl;
int ptr=0,itr=0;
while(itr<n){
 if(ar[itr]==0){
     itr++;
 }
 else{
     swap(ar[itr],ar[ptr]);
     ptr++;
     itr++;
 }
}
cout<<endl<<"result : \n";
for(int i=0;i<n;i++){
    cout<<ar[i];
}
}