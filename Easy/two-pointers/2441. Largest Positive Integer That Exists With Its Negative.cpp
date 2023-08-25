class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        map <int, int> m;
        int numsSize = nums.size();
        
        for(int i=0; i<numsSize; ++i){
            m[nums[i]]++;
        }
        
        int res = -1;
        
        for(auto it=m.begin(); it!=m.end(); ++it){
            if(m.count((it->first * -1))) res = it->first;
        }
        
        return res;
    }
};