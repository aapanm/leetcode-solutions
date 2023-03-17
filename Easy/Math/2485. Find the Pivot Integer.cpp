//binary search

class Solution {
public:
    int pivotInteger(int n) {
        return pivInt(n, (n+1)/2, 0);
    }
    
    int pivInt(int n, int piv, int count){
        
        if(count == n) return -1;
        
        int lsum=0, rsum=0;
        for(int i=1; i<=piv; ++i) lsum+=i;
        for(int i=piv; i<=n; ++i) rsum+=i;
        
        
        if(lsum == rsum) return piv;
        else if(lsum < rsum) {return pivInt(n, (piv+n)/2, count+1);}
        else{return pivInt(n, (piv+1)/2, count+1);};
        
    }
};


//sqrt

class Solution {
public:
    int pivotInteger(int n) {
        int sum = n * (n + 1) / 2, x = sqrt(sum);
        return x * x == sum ? x : -1;
    }
};

//dp

int dp[1001] = { 0, 0 };

class Solution {
public:
int pivotInteger(int n) {
    if (dp[1] == 0)
       for (int i = 1, j = 1; i <= 1000; ++i) {
           int sum = i * (i + 1) / 2;
           while (j * j < sum)
               ++j;
           dp[i] = j * j == sum ? j : -1;
       }
    return dp[n];
}
};