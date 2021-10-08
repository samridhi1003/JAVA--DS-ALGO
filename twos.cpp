// #include <iostream>
// using namespace std;

// int main(int args,char** argb){
//       int n ;
//     cout<<"enter length of array \n";
//     cin>>n;
//     int ar[n];
//     cout<<endl<<"enter array elements in terms of 0, 1,2  \n";

// for(int i=0;i<n;i++){
//     cin>>ar[i];

// }
// cout<<endl<<"elements of array are : \n";
// for(int i=0;i<n;i++)
// {
//     cout<<ar[i];
// }
// cout<<endl;
// int ptr1=0,itr=0,ptr2=n-1;
// while(itr<=ptr2)
// {
//  if(ar[itr]==1)
//  {
//      itr++;
//  }
//  else if(ar[itr]==0)
//  {
//      swap(ar[ptr1],ar[itr]);
//      ptr1++;
//      itr++;
//  }
//  else if(ar[itr]==2){
//      swap(ar[ptr2],ar[itr]);
//      ptr2--;
//  }

//  }

// cout<<endl<<"result : \n";
// for(int i=0;i<n;i++){
//     cout<<ar[i];
// }
// }
//======================
#include <bits/stdc++.h>

using namespace std;

void swap(int *a ,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int args,char**argb){
int n;
cout<<"\n enter the size";
cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
    /* code */
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    /* code */
    for (int j = 0; j < n-i ; j++)
    {
        /* code */
        if(arr[j] > arr[j+1])
        {
            swap(&arr[j],&arr[j+1]);
        }
    }
}
for (int i = 0; i < n; i++)
{
    /* code */
    cout << arr[i];
}
}