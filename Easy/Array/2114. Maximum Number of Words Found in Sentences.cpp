class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(int i = 0; i<sentences.size(); ++i){
            int l = 0;
            for(int j = 0; j < sentences[i].size(); ++j){
                if(sentences[i][j] == ' '){
                    l++;
                }
            }
            if(l+1 > max){max = l+1;}
        }
        return max;
    }
};