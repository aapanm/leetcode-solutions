class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        map <int, vector <int>> mp;
        vector<vector<int>> res;
        
        for(int i = 0; i < groupSizes.size(); ++i){
            if(mp.count(groupSizes[i])){
                if(mp[groupSizes[i]].size() == groupSizes[i]){
                    res.push_back(mp[groupSizes[i]]);
                    mp[groupSizes[i]] = {};
                }
            }
            mp[groupSizes[i]].push_back(i);
        }
        
        for(auto it = mp.begin(); it!= mp.end(); it++){
            res.push_back(it->second);
        }
        
        return res;
        
    }
};