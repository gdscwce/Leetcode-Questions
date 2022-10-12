//word search
//Medium
//no-79
//https://leetcode.com/problems/word-search/
#include <bits/stdc++.h>
using namespace std;
int row,col;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool backtrack(int i,int j,vector<vector<char>>& board, string word,unsigned int ind)
{
    if(ind>=word.size()) return true;
    if(i<0 || i>=row || j<0 || j>=col || board[i][j]!=word[ind]) return false;
    char t=board[i][j];
    board[i][j]= '#';
    for(int k=0;k<4;k++)
    {
        if(backtrack(i+dx[k],j+dy[k],board,word,ind+1))
            return true;
    }
     board[i][j] = t;
    return false;
}
bool exist(vector<vector<char>>& board, string word) 
{
    row= board.size();
    col= board[0].size();
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            if(backtrack(i,j,board,word,0))
                return true;
    return false;
}
int main() 
{
     vector<vector<char>> board= {
            {'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
        };
    string word = "ABCCED";
    if(exist(board,word))
        cout<< "true" ;
    else
        cout<< "false" ;
    return 0; 
}
