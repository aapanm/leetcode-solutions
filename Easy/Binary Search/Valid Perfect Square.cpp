class Solution {
public:
    bool isPerfectSquare(int num) {
        return binarySearch(num, 0, num);
    }
    
    bool binarySearch(int num, long long int min, long long int max){
        
        long long int p = (min + max)/2;
        
        if((p*p) == num){
            return true;
        }else if(p == min && p == max && (p*p)!= num){
            return false;
        }else{
            if((p*p) > num){
                if( p - 1 < min){
                    return binarySearch(num, min, min);
                }else{
                    return binarySearch(num, min, p-1);
                }
            }else{
                if(p+1 > max){
                    return binarySearch(num, max, max);
                }else{
                    return binarySearch(num, p+1, max);
                }
            }
        }
    }
};
