class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int i = 1, res, rem, q = x;
        uint64_t p = 0;
        bool l = true;
        while(l){
            res = (x/10);
            rem = x%10;
            if(i>1){
                p = (p * 10) + rem;
            }else{
                p = p + rem;
            }
            i++;
            x = res;
            if(res == 0){
                l = false;
            }
        }

        if(q == p){
            return true;
        }else{
            return false;
        }
    }
};
