//string 

class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int i = num;
        string s = to_string(i);
        
        if(s.size()==1) return true;
        
        reverse(s.begin(), s.end());
        
        i = stoi(s);
        s = to_string(i);
        
        reverse(s.begin(), s.end());
        
        return stoi(s) == num;
    }
};

//simple division to check if divisble by 10

class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        if(num == 0) return true;
        
        return !(num%10==0);
    }
};