class Solution {
public:
    int minTimeToType(string word) {
        int t = 0;
        int pt = 'a';
        for(int i=0; i<word.size(); ++i){
            t += min(abs(pt - word[i]), abs(abs(word[i]-pt) - 26));
            t++;
            pt = word[i];
        }
        return t;
    }
};