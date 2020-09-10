class Solution {
public:
    int mySqrt(int x) {
        int min = 0;
        int max = x;
        
        long long int p;
        
        while(min != max){
            
            p = (min + max)/2;
            
            if((p*p) == x){
                return p;
                break;
            }else{
                if((p*p) > x){
                    if(p - 1 < min){
                        max = min;
                    }else{
                        max = p - 1;
                    }                  
                }else{
                    if(p + 1 > max){
                        min = max;
                    }else{
                        min = p + 1;
                    } 
                }
            }
        }
        
        if(min*min > x){
            return min-1;
        }
        
        return min;
    }
};
