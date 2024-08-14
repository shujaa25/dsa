#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> powerset(vector<int>& nums, int i,
        vector<int> curr, vector<vector<int>> &res){

        if(i==nums.size()){
            res.push_back(curr);
        }else{
            powerset(nums, i+1, curr, res);
            curr.push_back(nums[i]);
            powerset(nums, i+1, curr, res);
        }
	
        return res;
    }

void powerset(string s, int i, string curr){
	if(i==s.length()){
	    cout << curr << "\n";
		return;
	}
	
	powerset(s, i+1, curr);
	powerset(s, i+1, curr+s[i]);
	
}

int main(){
	string s = "abc";
	
	powerset(s, 0, "");
	
	return 0;
}