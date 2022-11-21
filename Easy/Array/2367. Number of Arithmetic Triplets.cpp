class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        unordered_map <int, int> m;
        int count = 0;
        
        for(auto i : nums) m[i]++;
        
        for(int i = 0; i < nums.size(); ++i){
            if(m[nums[i]+diff]){
                if(m[nums[i]+diff+diff]){
                    count++;
                }
            }
        }
        
        return count;
        
    }
};