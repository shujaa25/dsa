
class Solution{   
public:

    bool subsetSum(vector<int> A, int sum, int n, vector<vector<int>>& dp){
        
        if(dp[sum][n] != -1) return dp[sum][n];
        
        
        if(A[n-1] > sum){
            return dp[sum][n]=subsetSum(A, sum, n-1, dp);
        }
        
        return dp[sum][n]=(subsetSum(A, sum, n-1, dp) || subsetSum(A, sum-A[n-1], n-1, dp));
    }

    bool isSubsetSum(vector<int>arr, int sum){
        
        vector<vector<int>> dp(sum+1, vector<int>(arr.size()+1));
        
        for(int i=0;i<sum+1;i++) dp[i][0] = 0;
        for(int i=0;i<arr.size()+1;i++) dp[0][i] = 1;
        
        for(int i=1;i<sum+1;i++){
            for(int j=1;j<arr.size()+1;j++){
                dp[i][j] = -1;
            }
        }
        
        return subsetSum(arr, sum, arr.size(), dp);
    }
};