class Solution {
public:
    string reverseWords(string s) {
        
        
        string s1 = reverseStr(s.c_str(), 0, s.length()-1);
        
        int idx = 0;
        
        string s2;

        int i;
        
        for(i = 0; i<s1.length(); ++i){
            
            if(s1[i] == ' '){
                
                if(idx){
                                   
                    s1 = reverseStr(s1.c_str(), (i-idx), i-1);
                    
                    
                    if(strlen(s2.c_str())){
                        s2.append(" ", 1);
                        s2.append(s1, (i-idx), idx);
                    }else{
                        s2.append(s1, (i-idx), idx);
                        
                    }
                    
                    idx = 0;
                    
                    
                }else{
                    
                    continue;
                    
                }
                
            }else{
                
                idx++;
                
            }
        }
        
        if(idx){
            s1 = reverseStr(s1.c_str(), (i-idx), i-1);
            if(strlen(s2.c_str())){
                s2.append(" ", 1);
                s2.append(s1, (i-idx), idx);
            }else{
                s2.append(s1, (i-idx), idx);
            }
        }
        
        return s2;
    }
    
    string reverseStr(string s, int begin, int end){
        
        for(; begin<end; ++begin, --end){
            char tmp = s[begin];
            s[begin] = s[end];
            s[end] = tmp;
        }
        
        return s.c_str();
        
    }

};
