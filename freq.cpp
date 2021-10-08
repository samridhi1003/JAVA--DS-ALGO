#include <iostream>
using namespace std;

int main(int args,char** argb){
    int n ;
    cout<<"enter length of array \n";
    cin>>n;
    int ar[n],freq;
    cout<<endl<<"enter array elements  \n";

for(int i=0;i<n;i++){
    cin>>ar[i];

}
cout<<"elements of array are : \n";
for(int i=0;i<n;i++){
    cout<<ar[i];
}
   freq=1;
    int suspect=ar[0];
for(int i=1;i<n;i++){
    if(suspect==ar[i]){
        freq++;
    }
    else{
        freq--;
    }
    if(freq==0){
        freq=1;
        suspect=ar[i];
    }

}
cout<<endl<<"suspect is \n"<< suspect;
int count=0;
for( int i:ar){
    
    if( i==suspect){
        count++;
        
    }
    
}
    if(count>n/2){
        cout<<endl<<"ans is \n"<<suspect;
     } 
     else{
        cout<<endl<<" no ans satisfied the eqn \n";
     }
    
}
