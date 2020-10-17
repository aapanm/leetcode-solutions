class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0 || nums.size() == 1){
            return nums.size();
        }
        
        int u = 0;
        
        for(int i = 0, j = i+1; i<nums.size()-1; i++, j++){
            if( nums[i] != nums[j]){
                u++;
                nums[u] = nums[j];
            }
        }
        
        
        return u+1;
        
    }
};