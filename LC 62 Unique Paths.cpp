/*class Solution {
public:
    int countpaths(int x,int y,int m,int n,vector<vector<int>>&dp){
        if(x<0 || y<0 || x>m-1 || y>n-1){
            return 0;
        }
        if(x==m-1 && y==n-1)return 1;
        if(dp[x][y]!=0)return dp[x][y];
        return dp[x][y]=countpaths(x+1,y,m,n,dp)+countpaths(x,y+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        return countpaths(0,0,m,n,dp);
    }
};*/