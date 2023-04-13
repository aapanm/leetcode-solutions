class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int calFirst = firstWord[firstWord.size()-1] - 'a', mul=1;
        for(int i=firstWord.size()-2; i>=0; --i){
            mul*=10;
            calFirst+=((int)(firstWord[i] - 'a')*mul);
        }
        int calScnd = secondWord[secondWord.size()-1] - 'a';
        mul=1;
        for(int i=secondWord.size()-2; i>=0; --i){
            mul*=10;
            calScnd+=((int)(secondWord[i] - 'a')*mul);
        }
        int calTrgt = targetWord[targetWord.size()-1] - 'a';
        mul=1;
        for(int i=targetWord.size()-2; i>=0; --i){
            mul*=10;
            calTrgt+=((int)(targetWord[i] - 'a')*mul);
        }
        return (calFirst+calScnd) == calTrgt;
    }
};

//minus 49

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        for(int i=0; i<firstWord.size(); ++i){
            firstWord[i] = firstWord[i] - 49;
        }
        
        for(int i=0; i<secondWord.size(); ++i){
            secondWord[i] = secondWord[i] - 49;
        }
        
        for(int i=0; i<targetWord.size(); ++i){
            targetWord[i] = targetWord[i] - 49;
        }
        
        return stoi(firstWord) + stoi(secondWord) == stoi(targetWord);
    }
};