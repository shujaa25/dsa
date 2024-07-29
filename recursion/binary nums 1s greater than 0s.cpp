class Solution{
public:	
    void bin(int n, string s, int ones, int zeroes, vector<string>& res){
        if(n==0){
            res.push_back(s);
            return;
        }
        
        bin(n-1, s+"1", ones+1, zeroes, res);
        
        if(ones != 0 && ones > zeroes)
            bin(n-1, s+"0", ones, zeroes+1, res);
    }

	vector<string> NBitBinary(int n)
	{
	    vector<string> res;
	    bin(n, "", 0, 0, res);
	    return res;
	}
};