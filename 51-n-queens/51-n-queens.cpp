class Solution {
public:
    bool isSafe(int row ,int col , vector<string> board , int n){
        int dupRow = row;
        int dupCol = col;
        
        //for the straight attack
        while(col>=0){
            
            if(board[row][col] == 'Q') return false;
            col--;
        }
        col = dupCol;
        while(row>=0 && col >=0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        col = dupCol;
        row = dupRow;
        
        while(row<n && col >=0){
             if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        return true;
        
    }
    void solve(int n, int column ,vector<string> &board , vector<vector<string>> &ans ){
        if(column == n){
            ans.push_back(board);
            return;
        }
        for(int row =0 ; row<n ; row++){
            if(isSafe(row ,column , board , n)){
                board[row][column] = 'Q';
                 solve( n ,column+1,board ,ans);
                board[row][column] = '.';
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans ;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i<n ;i++){
            board[i] = s;
        }
        solve(n,0,board,ans);
        return ans;
    }
};