class Solution {
public:
    void dfs(vector<vector<int>> &image , int i , int j ,int color , int old_color,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || image[i][j] != old_color || image[i][j] == color) return ;
        image[i][j] = color;
        dfs(image,i+1,j,color,old_color,m,n);
        dfs(image,i,j+1,color,old_color,m,n);
        dfs(image,i-1,j,color,old_color,m,n);
        dfs(image,i,j-1,color,old_color,m,n);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int column = image[0].size();
        int old_color = image[sr][sc];
        dfs(image,sr,sc,color,old_color,row,column);
        return image;
    }
};