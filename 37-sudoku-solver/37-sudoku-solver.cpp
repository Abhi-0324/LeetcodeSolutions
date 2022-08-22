class Solution {
public:
    bool inCol(vector<vector<char>>& board , int row , int col , char nums){
        for(int i =0 ; i<9 ;i++){
            if(board[i][col] == nums) return true;
        }
        return false;
    }
     bool inRow(vector<vector<char>>& board , int row , int col , char nums){
        for(int i =0 ; i<9 ;i++){
            if(board[row][i] == nums) return true;
        }
        return false;
    }
    bool inBox(vector<vector<char>>& board , int row , int col , char nums){
        for(int i = row-row%3 ;i<row-row%3+3;i++){
            for(int j = col-col%3 ;j<col-col%3+3;j++){
                if(board[i][j] == nums) return true;
            }
        }
        return false;
    }
    bool solve(vector<vector<char>>& board , int row ,int col){
        if(col == 9){
            col =0;
            row ++;
        }
         if(row == 9){
             return true;
         }
        if(board[row][col] == '.'){
        for(int i = 1 ; i<= 9; i++){
            if(!inRow(board ,row,col,i+'0') && !inCol(board ,row ,col,i+'0') && !inBox(board,row,col,i+'0')){
                board[row][col] =i+'0';
                if(solve(board,row,col+1))return true;
                board[row][col] ='.';
            }
            
        }
    }
        else{
            return solve(board,row,col+1);
        }
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve (board,0,0);
        
    }
};