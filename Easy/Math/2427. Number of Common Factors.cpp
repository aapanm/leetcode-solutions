class Solution {
public:
    int commonFactors(int a, int b) {
        int i=1, res=0, t=(a>b?b:a);
        while(i<=t){
            if(a%i==0 && b%i==0){
                res++;
            }
            i++;
        }
        return res;
    }
};