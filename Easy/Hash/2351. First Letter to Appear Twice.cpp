class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char, int> mp;
        for(auto i : s){
            if(mp.count(i)) return i;
            mp[i]++;
        }
        return ' ';
    }
};