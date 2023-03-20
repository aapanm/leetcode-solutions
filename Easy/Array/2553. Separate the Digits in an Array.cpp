//without string conversion

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int i=nums.size()-1; i>=0; --i){
            int n = nums[i];
            while(n){
                res.push_back(n%10);
                n/=10;
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

//string conversion

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans ;
        
        for( auto it : nums ){
            
            string tmp = to_string(it);
            
            for( auto s : tmp ) ans.push_back(s-'0');
            
        }
        
        return ans ;
    }
};