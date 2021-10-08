// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(int arga,char** argb)
// {
// int a=pow(10,5);
// int b=2*pow(10,5);
// cout<<(a*b);

// }
#include <bits/stdc++.h>

using namespace std;
int main()
{
int n;
cout<<"enter the no of line";
cin>>n;
for (int i = 0; i <= n; i++)
{
    /* code */
    for (int j = 0; j <= n; j++)
    {
        /* code */
        if(j == i || j == n-i)
            {cout<<"*";}
        else
            {cout<< " ";}

    }
    cout << "\n";
    
}

}