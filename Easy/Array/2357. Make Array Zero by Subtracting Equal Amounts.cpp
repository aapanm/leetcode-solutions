//array

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int arr[101] = {0};
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] > 0) arr[nums[i]]++;
        }
        int count=0;
        for(int i=0; i<101; ++i){
            if(arr[i]) count++;
        }
        return count;
    }
};

//hash

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] > 0) mp[nums[i]]++;
        }
        int count=0;
        for(auto it=mp.begin(); it!=mp.end(); ++it){
            if(it->second) count++;
        }
        return count;
    }
};