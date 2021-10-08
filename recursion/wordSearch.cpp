#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
    int dir[4][2]={{0,1},{-1,0},{1,0},{0,-1}};
    void display(vector<vector<char>>& board,int n,int m)
    {
         for(int  i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
             cout<<board[i][j];
             cout<<endl;
         }
         cout<<endl;
    }
     bool recur(vector<vector<char>>& board,const string &word,int idx,int x,int y,int n,int m)
          {
           if(idx==word.length())
           {
               return true;
           }
            bool res=false;
                for(int d=0;d<4;d++)
                {
                    int newx=x+dir[d][0];
                    int newy=y+dir[d][1];
                    char temp=board[x][y];
                     board[x][y]='_';
                     cout<<x<<y<<"@"<<idx<<"  "<<res<<endl;
                     display(board,n,m);
                     if(newx>=0 && newy>=0 && newx<n && newy<m && board[newx][newy]==word[idx])
                     {
                         
                       res=res||recur(board,word,idx+1,newx,newy,n,m);
                     }
                   board[x][y]=temp;
                    
                }
        return res;
          }
    bool exist(vector<vector<char>>& board, string word) {
        if(board.size()==0)
            return false;
        int n=board.size();
        int m=board[0].size();
        if(n*m<word.length())
            return false;
        bool res=false;
        for(int  i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]==word[0])
                {
                 char temp=board[i][j];
             
                 res=res||recur(board,word,1,i,j,n,m);
                
                }
        
        return res;
    }
  
          int main()
          {
              vector<vector<char>> board{{'A','B','C','E'},
                                            {'S','F','C','S'},
                                            {'A','D','E','E'}};
                                      cout<< exist(board,"ABCB");
          }