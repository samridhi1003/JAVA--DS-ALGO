// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main(){
// // //     int n,m;
// // //     cin>>n;
// // //     cin>>m;
// // //     int arr[n][m];

// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         /* code */
// // //         for (int j = 0; j < m; j++)
// // //         {
// // //             /* code */
// // //             cin>>arr[i][j];
// // //         }
// // // cout<<"\n";
// // //     }

// // //     for (int i = 0; i < m; i++)
// // //     {
// // //         /* code */
// // //         for (int j = i; j < n-i; j++)
// // //         {
// // //             cout<<arr[j][i];
// // //         }

// // //         for (int z = i+1; z < m-i  ; z++)
// // //         {
// // //             cout<<arr[n-i-1][z];
// // //         }

// // //         for (int x = n-i-1 ; x > i; x--)
// // //         {
// // //             cout<<arr[x][m-i-1];
// // //         }
        
// // //         for (int w = m-i-1; w > i ; w--)
// // //         {
// // //             cout<<arr[i][w];
// // //         }
        
// // //     }
    
// // //    return 0; 
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int n,m;
// //     cin>>n;
// //     cin>>m;
// //     int arr[n][m];

// //     for (int i = 0; i < n; i++)
// //     {
// //         /* code */
// //         for (int j = 0; j < m; j++)
// //         {
// //             /* code */
// //             cin>>arr[i][j];
// //         }
// // cout<<"\n";
// //     }

// //     for (int i = 0; i < m; i++)
// //     {
// //         /* code */
// //         for (int j = i; j < n-i; j++)
// //         {
// //             cout<<arr[j][i]<<" ";
// //         }

// //         for (int z = i+1; z < m-i  ; z++)
// //         {
// //             cout<<arr[n-i-1][z]<<" ";
// //         }

// //         for (int x = n-i-2 ; x > i; x--)
// //         {
// //             cout<<arr[x][m-i-1]<<" ";;
// //         }
        
// //         for (int w = m-i-1; w > i ; w--)
// //         {
// //             cout<<arr[i][w]<<" ";;
// //         }
        
// //     }
    
// //    return 0; 
// // }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// int n , min = 0;
// cin>>n;
// int arr[n][n];
// int max = 0;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         cin>>arr[i][j];
//     }
//     cout<<"\n";
// }

// for (int i = 0; i < n; i++)
// {
//     int y = 0;
//     min = arr[i][0];
//     for (int j = 0; j < n; j++)
//     {
//          if (min>arr[i][j])
//          {
//             min = arr[i][j];
//             max = arr[0][j];
//             y = j;
//          }
//     }
//     for (int x = 0; x < n; x++)
//     {
//         if (max<arr[x][y])
//         {
//             max = arr[x][y];
//         }
//     }
    
// }

// if (max == min)
// {
//     cout<<max;
// }else
// {
//     cout<<"no saddle point exists";
// }

// }


#include <bits/stdc++.h>
using namespace std;

bool possitionSafe(int arr[n][n],int row,int col)
{
    int i, j;

    for (i = row, j = col; i > 0; i--)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
    }

    for (i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void printNQueen(int &arr[n][n],string str,int row)
{

    if (row == n)
    {
        cout << str << endl;
        return;
    }


    for (int col = 0; col < n; col++)
    {
        if (possitionSafe(arr, row, col))
        {
            arr[row][col] = 1;
            string row_1 = to_string(row);
            string col_1 = to_string(col);
            printNQueen(arr, str + row_1 + "-" + col_1, row + 1);
            arr[row][col] = 0;
        }
    }
}

int main(int arga , char** argb)
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[n][n];
        }
        cout << "\n";
    }

    printNQueen(arr[n][n], "", 0);
}






