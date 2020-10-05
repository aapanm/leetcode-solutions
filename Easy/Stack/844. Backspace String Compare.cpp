class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        int j = 0, k = 0;
        
        for(int i = 0; i<S.size(); ++i, ++j){
            
            if(S[i] == '#'){
                
                j-=2;
                
                if(j < -1){
                    j = -1;
                }
                
                continue;
            }
            S[j] = S[i];
        }
        
        
        for(int i = 0; i < T.size(); ++i, ++k){
            
            if(T[i] == '#'){
                
                k-=2;
                
                if(k < -1){
                    k = -1;
                }
                
                continue;
            }
            
            T[k] = T[i];
        }
        
        
        if(S.substr(0, j) == T.substr(0, k)){
            return true;
        }
        
        return false;
    }
};
