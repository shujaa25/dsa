#include<iostream>
using namespace std;

void perm(string s, int i){
    if(i== s.length()){
        cout << s << "\n";
        return;
    }

    for(int j=i;j<s.length();j++){
        swap(s[i], s[j]);
        perm(s, i+1);
        swap(s[i], s[j]);
    }
}

int main(){

    string s = "abc";
    perm(s, 0);
    return 0;
}