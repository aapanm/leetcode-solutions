class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int i;
        for(i=0; i<word.size(); ++i){
            if(word[i] == ch) break;
        }
        
        if(i==word.size()) return word;
        
        int t=(i+1)/2, j=0;  
        
        while(t){
            int tmp = word[i];
            word[i] = word[j];
            word[j] = tmp;
            i--;
            j++;
            t--;
        }
        
        return word;
        
    }
};