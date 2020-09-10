/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        return binarySearch(n, 0, n);
    }
    
    int binarySearch(int n, long long int min, long long int max){
        
        long long int p = (min + max)/2;
        
        int res = guess(p);
        
        if(res == 0){
            return p;
        }else{
            if(res == 1){
                if(p+1 > max){
                    return binarySearch(n, max, max);
                }else{
                    return binarySearch(n, p+1, n);
                }
            }else{
                if(p-1 < min){
                    return binarySearch(n, min, min);
                }else{
                    return binarySearch(n, min, p-1);
                }
            }
        }
    }
};
