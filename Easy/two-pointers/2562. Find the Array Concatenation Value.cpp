class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size() - 1;
        long long int c = 0;
        
        while(start <= end){
            
            if(start == end){
                c += nums[start];
            }else{
                string s = to_string(nums[start]) + to_string(nums[end]);
                c += stoi(s);
            }
            
            start++;
            end--;
            
        }
        
        return c;
    }
};