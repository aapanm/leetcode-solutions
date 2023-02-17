class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map <char,int> mp;
        int res = 0;
        for(char i : stones) mp[i]++;
        for(char i : jewels) res+=mp[i];
        return res;
    }
};