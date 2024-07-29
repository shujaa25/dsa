class Solution
{
    public:
    
    int knapSack2(int W, int wt[], int val[], int n, vector<vector<int>> &dp) {
    if(dp[W][n] != -1) return dp[W][n];
    
    else if (W < wt[n-1]){
        return  dp[W][n] = knapSack2(W, wt, val, n-1, dp);
    }
    else 
    return dp[W][n] = max(knapSack2(W, wt, val, n-1, dp),
    knapSack2(W-wt[n-1], wt, val, n-1, dp)+val[n-1]);
}
    
    int knapSack(int W, int wt[], int val[], int n) { 
       vector<vector<int>> dp(W+1, vector<int> (n+1));
    
        for(int i=0;i<W+1;i++){
            dp[i][0] = 0;
        }
        
        for(int i=0;i<n+1;i++){
            dp[0][i] = 0;
        }
    
        for(int i=1;i<W+1;i++){
            for(int j=1;j<n+1;j++){
                dp[i][j] = -1;
            }
        }
        
        return knapSack2(W, wt, val, n, dp);
    }
};