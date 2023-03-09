class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map <int, string> mp;
        for(int i=0; i<heights.size(); ++i){
            mp[heights[i]] = names[i];
        }
        vector<string>res;
        for(auto it=mp.rbegin(); it!=mp.rend(); ++it){
            res.push_back(it->second);
        }
        return res;
    }
};