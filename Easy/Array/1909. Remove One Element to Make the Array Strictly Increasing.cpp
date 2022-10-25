class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        
        int c = 0;
        int mx = nums[0];
        
        for(int i = 1; i < nums.size() && c < 2; ++i){
            if(mx >= nums[i]){
                c++;
                if(i > 1 && nums[i] <= nums[i-2]){
                    mx = nums[i-1];
                    continue;
                }
            }
            mx = nums[i];
        }
        
        return c < 2;
        
    }
};