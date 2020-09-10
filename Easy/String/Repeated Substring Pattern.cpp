class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
    string a;
        
    int it=0;
    
    if(s.size() == 1 || s.size()>10000){
        return false;
    }
    
    do{
        a = a+s[it];
        
        it++;
        
        string c1;
        
        int i;
        
    
        for(i = it; i<(2*(it)); ++i){
            
            c1 = c1 + s[i];
            
        }
        
        if(a == c1){
                    
            string sum = a+c1;
            if(s[s.size()-1] == sum[(sum.size())-1] && s[(s.size())-(sum.size())] == sum[0]){
                            
                return true;
            }
        }
    
    }
    while(a.size() != (s.size()/2));
    
    return false;
            
    }
};
