//o(n)

class Solution {
public:
    bool checkString(string s) {
        int f = false;
        for(char c : s){
            if(c == 'b') f = true;
            else{
                if(f) return false;
            }
        }
        return true;
    }
};

//is sorted

class Solution {
public:
    bool checkString(string s) {
        return is_sorted(s.begin(), s.end());
    }
};