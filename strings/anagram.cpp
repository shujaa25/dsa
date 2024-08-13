class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) return false;

        unordered_map<char, int> mp;

        for(auto c: s){
            int x = mp[c];
            mp[c] = x+1;
        }

        for(auto c: t){
            
            int x = mp[c];
            
            if(x == 0) return false;
            mp[c] = x-1;
        }


        return true;
    }
};