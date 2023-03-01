class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<int>checkArr(26);
        
        for(int i=0; i<sentence.size(); ++i){
            checkArr[sentence[i]-'a']++;
        }
        
        for(int i=0; i<checkArr.size(); ++i){
            if(!checkArr[i]) return false;
        }
        
        return true;
    }
};