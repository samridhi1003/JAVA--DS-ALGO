#include <iostream>
using namespace std;
int binary(int ar,int st,int en, int mid,int n){
    
    while(st<=en){
        if(ar[mid]<=n){
            mid+1=st;
            (st+en)/2=mid;

        }
        else if (ar[mid]>n){
            mid-1=en;
             (st+en)/2=mid;
        }
            else
            {
                cout<<"element not found \n";
            }
    }
}
int main(int args,char** argb)
{
    int ar[10],si=0,ei=9,n,mid=4;
    cout<<"enter the elements of an array in sortd list \n";
    for(int i=0;i<9;i++){
        cin>>ar[i];
    }
    cout<<" elements entered are: "
     for(int i=0;i<9;i++){
        cout<<ar[i];

    }
    cout<<"enter element to be searched";
    cin>>n;
    binary(ar,0,9,5,n);
    return binary;
    }


