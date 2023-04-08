//o(nlogn)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0; i<=n; ++i){
            int sm=0, n=i;
            while(n){
                sm+=n%2;
                n/=2;
            }
            res.push_back(sm);
        }
        return res;
    }
};

//one pass loop
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0] = 0;
        for(int i=1; i<=n; ++i){
            if(i%2==0){
                res[i] = res[i/2];
            }else{
                res[i] = res[i/2] + 1;
            } 
        }
        return res;
    }
};

//one pas recursion

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0] = 0;
        for(int i=1; i<=n; ++i){
            res[i] = solve(i);
        }
        return res;
    }
    
    int solve(int n){
        if(n==0) return 0;
        if(n%2 == 0) return solve(n/2);
        else return solve(n/2) + 1;
    }
};