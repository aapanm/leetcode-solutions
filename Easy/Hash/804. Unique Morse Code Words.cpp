class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>codes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map <string, int> mp;
        
        for(int i=0; i<words.size(); ++i){
            string morseWrds;
            for(int j=0; j<words[i].size(); ++j){
                morseWrds+=codes[words[i][j]-'a'];
            }
            mp[morseWrds]++;
        }
        return mp.size();
    }
};