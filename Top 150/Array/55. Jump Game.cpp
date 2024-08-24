class Solution {
public:
    bool canJump(vector<int>& nums){
        int lastGoodIndex = nums.size()-1;
        for(int i=nums.size()-2; i>=0; --i){
            if(nums[i]+i >= lastGoodIndex){
                lastGoodIndex = i;
            }
        }
        if(lastGoodIndex == 0) return true;
        return false;
    }
};


class Solution {
public:
    bool canJump(vector<int>& nums){
        int gas = 0;
        for(int i : nums){
            if(gas<0) return false;
            if(i>gas)gas=i;
            gas--;
        }
        return true;
    }
};