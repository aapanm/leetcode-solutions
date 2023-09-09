class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        int res = 0;
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size() - 1;
        map <float, int> m;
        
        while(i < j){
            float avg = (nums[i] + nums[j]) / 2.0;
            
            m[avg]++;
            
            i++;
            j--;
        }
        
        return m.size();
    }
};

