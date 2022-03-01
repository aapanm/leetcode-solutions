class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> rslt;
        for(int i=0; i<nums.size(); ++i){
            rslt.push_back(nums[nums[i]]);
        }
        return rslt;
    }
};