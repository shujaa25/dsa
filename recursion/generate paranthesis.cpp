class Solution {
public:

    void solve(int open, int close, int n, string s, vector<string> &res){

        //base
        if(open == close && close == n){
            res.push_back(s);
            return;
        }

        //open
        if(open < n){
            solve(open+1, close, n, s+"(", res);
        }

        //close
        if(open > 0 && close < open){
            solve(open, close+1, n, s+")", res);
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        solve(0, 0, n, "", res);
        return res;
    }
};