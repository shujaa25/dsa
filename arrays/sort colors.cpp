//https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z, o;
        z=o=0;

        for(auto x: nums){
            if(x==0) z++;
            else if(x==1) o++;
        }

        for(int i=0;i<nums.size();i++){
            if(z > 0){
                nums[i] = 0;
                z--;
            }else if(o > 0){
                nums[i] = 1;
                o--;
            }else nums[i] = 2;
        }
        
    }
};