class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        if(nums.size() == 1) return {0,1};
        
        unordered_map <int, int> mp;
        
        for(auto i:nums) mp[i]++;
        
        int pair=0, lft=0;
        
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            if((it->second%2)==0) pair+=(it->second/2);
            else{
                if(it->second > 1) pair+=(it->second/2);
                lft++;
            }
        }
        return {pair, lft};
    }
};