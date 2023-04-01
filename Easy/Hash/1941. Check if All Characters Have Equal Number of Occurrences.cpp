class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char, int> mp;
        for(char c:s) mp[c]++;
        int c = mp[s[0]];
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(c!=it->second) return false;
        }
        return true;
    }
};