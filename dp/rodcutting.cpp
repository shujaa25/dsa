
class Solution{
  public:
  
    int solve(int W, int p[], int n, vector<vector<int>> &dp) {
        if(dp[W][n] != -1){
            return dp[W][n];
        }
    
        else if(W < n){
            return dp[W][n]=solve(W, p, n-1, dp);
        }
    
        return dp[W][n]=max(solve(W, p, n-1, dp),
        solve(W-n, p, n, dp)+p[n-1]);
    }
  
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n+1, vector<int> (n+1));
    
        for(int i=0;i<n+1;i++){
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
    
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                dp[i][j] = -1;
            }
        }
        
        return solve(n, price, n, dp);
    }
};