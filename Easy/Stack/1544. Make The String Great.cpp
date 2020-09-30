//stack solution

class Solution {
public:
    string makeGood(string s) {
        
        stack <char> st;
        
        vector <char> vec;
        
        for(int i = 0; i< s.size(); ++i){
            if(!st.empty()){
                if(st.top() == s[i] + 32 || st.top()+32 == s[i]){
                    st.pop();
                    if(i>0){
                        vec.erase(vec.end() - 1);
                    }else{
                        vec.erase(vec.end() -1 );
                    }
                }else{
                    st.push(s[i]);
                    vec.push_back(s[i]); 
                }
            }else{
                st.push(s[i]);
                vec.push_back(s[i]);
            }
        }
        
        
        for (std::vector<char>::const_iterator i = vec.begin(); i != vec.end(); ++i)
            std::cout << *i << ' ';
        
        
        std:: string str(vec.begin(), vec.end());
        
        return str; 
    }
};

//two pointer solution

class Solution {
public:
    string makeGood(string s) {
        
        int j = 0;
        bool x = false;
        
        for(int i = 0; i< s.size(); ++i, j++){
            if(i>0){
                if(s[i] == s[i+1] - 32 || s[i] - 32 == s[i+1]){
                    j--;
                    i++;
                    x = true;
                    continue;
                }
                
                if(x = true){
                    if(j>0){
                        if(s[j-1] == s[i] - 32 || s[j-1] - 32 == s[i]){
                            j-=2;
                            x = false;
                            continue;
                        }
                    }       
                }
            }
            s[j] = s[i];
        }
        
        
        return s.substr(0, j); 
    }
};