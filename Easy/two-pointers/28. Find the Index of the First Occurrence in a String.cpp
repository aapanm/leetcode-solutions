class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = needle.size(), j;
        string s = "";
        for(int i=0; i<haystack.size(); ++i){
            if((i+l) <= haystack.size()){
                for(j=i; j<(i+l); ++j){
                    s+=haystack[j];
                }
                if(s==needle){
                    return i;
                }
                s = "";
            }
        }
        return -1;
    }
};