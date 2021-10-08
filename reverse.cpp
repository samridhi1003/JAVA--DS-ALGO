#include <iostream>
using namespace std;
int reverse(int ar[],int si,int ei){

int temp=0;

    while(si<ei){
        temp=ar[si];
        ar[si]=ar[ei];
        ar[ei]=temp;
        si++;
        ei--;
    }


}

int main(int args,char** argb)
{
    int n;
    cout<<"enter no. of elements /n";
    cin>>n;
    cout<<"enter elemeents of array"<<endl;
    int ar[n],a[1];
    {
        for(int i=0;i<=n-1;i++)
     cin>>ar[i];
    }
    cout<<"actual array is "<<endl;
    for(int m=0;m<n;m++)
    {
    cout<<ar[m];
     }
     
         reverse(ar,0,n-1);
           cout<<"reverse array ";
        for(int j=0;j<n;j++){
            cout<<ar[j];
        }
}         
     
     

