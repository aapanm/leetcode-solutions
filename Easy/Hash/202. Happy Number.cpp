class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int, int> mp;
        while(true){
            string s = to_string(n);
            int sm = 0;
            for(int i=0; i<s.size(); ++i){
                int sqr = (s[i] - '0') * (s[i] - '0');
                sm += sqr;
            }
            if(sm == 1) return true;
            if(mp.count(sm)) return false;
            mp[sm]++;
            n = sm;
        }
        
        return false;
    }
};