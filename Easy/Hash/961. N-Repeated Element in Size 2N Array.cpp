//hash

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i=0; i<nums.size(); ++i){
            if(mp[nums[i]]) return nums[i];
            mp[nums[i]]++;
        }
        return 0;
    }
};

//two pointers

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        for (auto i = 0; i < A.size() - 2; ++i)
            if (A[i] == A[i + 1] || A[i] == A[i + 2]) return A[i];
        
        return A[A.size() - 1];
    }
};