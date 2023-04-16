class Solution {
public:
    bool digitCount(string num) {
        unordered_map <int, int> mp;
        for(char i:num) mp[i - '0']++;
        for(int i=0; i<num.size(); ++i){
            if(mp[i] == (num[i] - '0')){
                
            }else{
                return false;
            }
        }
        return true;
    }
};