class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int i=0, j=s.size()-1;
        
        while(i<j){
            
            if(isalpha(s[i]) && isalpha(s[j]) ){
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
                i++;
                j--;
            }
            
            if(isalpha(s[i]) && !isalpha(s[j])){
                j--;
            }
            
            if(!isalpha(s[i]) && isalpha(s[j])){
                i++;
            }
            
            if(!isalpha(s[i]) && !isalpha(s[j])){
                i++;
                j--;
            }
        }
        
        return s;
    }
};