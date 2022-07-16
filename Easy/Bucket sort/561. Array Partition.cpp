class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        vector <int> bucket (20001, 0);
        
        for(int i : nums) bucket[10000+i]++;
        
        int sum = 0, count = 1, i = 0;
        
        while(count <= nums.size()){
            if(bucket[i] == 0) i++;
            else{
                if(count % 2 == 1) sum += (i - 10000);
                bucket[i]--;
                count++;
            }
        }
        
        return sum;
    }
};