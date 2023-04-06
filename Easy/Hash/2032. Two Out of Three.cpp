class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        unordered_map <int, vector<int>> mp;
        
        for(auto i : nums1) mp[i]={1,0,0}; //map structure will look like this-> {key: 1, val:{1,0,0}}
        
        for(auto i: nums2){
            if(mp.count(i)) mp[i][1]=1;
            else mp[i] = {0,1,0};
        }
        
        for(auto i: nums3) if(mp.count(i)) mp[i][2] = 1;
        
        vector <int> res;
        
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second[0] + it->second[1] + it->second[2] > 1) res.push_back(it->first);
        }
        
        return res;
    }
};