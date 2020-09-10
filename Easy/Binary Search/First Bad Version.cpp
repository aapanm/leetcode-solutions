// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int min = 0;
        long long int max = n;
        
        long long int p, pot;
        
        while(min != max){
            
            p = (min + max)/2;
            
            if(isBadVersion(p)){
                pot = p;
                if(p-1<min){
                    max = min;
                }else{
                    max = p-1;
                }
            }else{
                if(p+1 > max){
                    min = max;
                }else{
                    min = p+1;
                }
            }
        }
        
        if(isBadVersion(min)){
            return min;
        }
        
        return pot;
    }
    
};
