class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> res;
        int x;
        
        for(int i = 0; i<numbers.size(); ++i){
            if(i == numbers.size()-1){
                x = binarySearch(numbers, target-numbers[i], numbers.size()-1, numbers.size()-1);  
            }else{
                x = binarySearch(numbers, target-numbers[i], i+1, numbers.size()-1);
            }
            
            if(x){
                res.push_back(i+1);
                res.push_back(x+1);
                break;
            }
        }
        return res;
    }
    
    int binarySearch(vector<int>& numbers, int n, int min, int max){
        int p = (min + max)/2;
        if(numbers[p] == n){
            return p;
        }else if(p ==  min && p == max && numbers[p] != n){
            return 0;
        }else{
            if(numbers[p] > n){
                if(p-1 < min){
                    return binarySearch(numbers, n, min, min);
                }else{
                    return binarySearch(numbers, n, min, p-1);
                }
                
            }else{
                if(p+1 > max){
                    return binarySearch(numbers, n, max, max);
                }else{
                    return binarySearch(numbers, n, p+1, max);
                }
            }
        }
    }
};
