class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector <int> res(2*n);
        
        for(int i = 0, j=0; i<n; ++i){
            res[j++] = (nums[i]);
            res[j++] = (nums[i+n]);
        }
        
        return res;
    }
};