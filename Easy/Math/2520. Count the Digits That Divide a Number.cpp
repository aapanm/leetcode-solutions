class Solution {
public:
    int countDigits(int num) {
        int res=0, n=num;
        while(n/10){
            if(!(num%(n%10))) res++;
            n=n/10;
        }
        if(!(num%n)) res++;
        return res;
    }
};