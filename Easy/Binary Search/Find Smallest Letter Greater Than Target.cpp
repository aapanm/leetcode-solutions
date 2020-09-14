class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target < letters[0] || target > letters[letters.size()-1]){
            return letters[0];
        }else{
            return binarySearch(letters, 0, letters.size()-1, target, 0);
        }
    }
    
    char binarySearch(vector<char>& letters, int min, int max, char target, int pot){
        int p = (min + max)/2;
        
        if(p == min && p == max){
            if(letters[p] > target){
                return letters[p];
            }else{
                return letters[pot];
            }
        }else{
            if(letters[p] > target){
                if(min > p-1){
                    return binarySearch(letters, min, min, target, p);
                }else{
                    return binarySearch(letters, min, p-1, target, p);
                }
                
            }else{
                if( p+1 > max){
                    return binarySearch(letters, max, max, target, pot);
                }else{
                    return binarySearch(letters, p+1, max, target, pot);
                }
            }
        }
    }
};
