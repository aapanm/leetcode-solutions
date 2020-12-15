class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            nums[i] = sum += nums[i];
        }
        
        return nums;
    }
};