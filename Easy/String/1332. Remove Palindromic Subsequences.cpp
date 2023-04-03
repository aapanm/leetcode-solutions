class Solution {
public:
    int removePalindromeSub(string s) {
        if(!s.size()) return 0;
        if(string(s.rbegin(), s.rend()) == s) return 1;
        return 2;
    }
};