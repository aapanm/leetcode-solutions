class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        vector<int>lft(nums.size());
        vector<int>rght(nums.size());
        vector<int>res(nums.size());
        
        int lsum=0, rsum=0;
        
        for(int i=0; i<nums.size(); ++i){
            lft[i] = lsum+=nums[i];
        }
        
        for(int i=nums.size()-1; i>=0; --i){
            rght[i] = rsum+=nums[i];
        }
        
        for(int i=0; i<nums.size(); ++i){
            res[i]= abs(lft[i]-rght[i]);
        }
        
        return res;
    }
};