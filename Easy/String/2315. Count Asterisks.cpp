class Solution {
public:
    int countAsterisks(string s) {
        int l = 0, res=0;
        
        for(char i: s){
            l += i=='|';
            res += i=='*' && l%2==0;
        }
        return res;
    }
};