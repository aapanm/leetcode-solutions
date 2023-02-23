class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int elm_sm=0, dg_sm=0;
        
        for(int i=0; i<nums.size(); ++i){
            
            int n = nums[i];
            while(n/10){
                dg_sm += (n%10);
                n = n/10;
            }
            dg_sm+=n;
            elm_sm += nums[i];
        }
        
        return abs(elm_sm - dg_sm);
    }
};