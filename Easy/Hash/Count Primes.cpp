class Solution {
public:
    int countPrimes(int n) {
        if(n>1){
            bool x[n];

        for(int i = 0; i<(n); i++){
            x[i] = true;
        }


        int c = 2;
        int fac = sqrt(n);

        for(int i = 2; i<=fac; i++){
            if(i*i == n){
                break;
            }
                int j = 0, m = 0;
            for(int j = 0; m<n; j++){
                if(x[(i*i)+(j*i)] == true){
                  x[(i*i)+(j*i)] = false;
                  c++;
                }
                m = (i*i)+((j+1)*i);
            }
        }

        return (n-c);
        }else{
            return 0;
        }
    }
};
