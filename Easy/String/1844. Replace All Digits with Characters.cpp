class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0; i<s.size(); i=i+2){
            int t=(int)s[i+1];
            s[i+1] = (s[i] + (t-'a') + 1) + '0';
        }
        return s;
    }
};