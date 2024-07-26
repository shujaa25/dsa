#include<iostream>

using namespace std;

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