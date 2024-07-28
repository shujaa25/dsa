class Solution {
public:

    void solve(string s, int i, vector<string> &res){

        if(i>=s.length()){
            res.push_back(s);
            return;
        }

        if(s[i] >= '0' && s[i] <= '9'){
                solve(s, i+1, res);
                return;
        }

        solve(s, i+1, res);
                
        int a = (int)s[i];
        a ^= (int)' ';
        s[i] = (char)a;
        solve(s, i+1, res);

    }

    vector<string> letterCasePermutation(string s) {

        vector<string> res;

        solve(s, 0, res);

        return res;

    }
};