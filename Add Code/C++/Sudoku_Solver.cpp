class Solution {
public:
    bool valid(int x,int y,vector<vector<char>>& board,int val){
        if(x<0||y<0||x>=9||y>=9){
            return 0;
        }
        for(int i=0;i<9;i++){
            if(board[x][i]==val){
                return 0;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][y]==val){
                return 0;
            }
        }
        int a1=(x/3)*3;
        int a2=a1+3;
        int b1=(y/3)*3;
        int b2=b1+3;
        for(int i=a1;i<a2;i++){
            for(int j=b1;j<b2;j++){
                if(board[i][j]==val){
                    return 0;
                }
            }
        }
        return 1;
    }
    bool rec(int x,int y,vector<vector<char>>& board){
        if(x==9){
            return true;
        }
        if(y==9){
            return rec(x+1,0,board);
        }
        if(board[x][y]!='.'){
            return rec(x,y+1,board);
        }
        for(char c='1';c<='9';c++){
            if(valid(x,y,board,c)){
            board[x][y]=c;
                if(rec(x,y+1,board)){
                    return true;
                }
                board[x][y]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        rec(0,0,board);
    }
};