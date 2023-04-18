//hashmap

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map <int, int> mp;
        for(int i:nums) mp[i]++;
        while(mp.count(original)){
            original = original * 2;
        }
        return original;
    }
};

//array

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ar[1001] = {0};
        for(int i:nums) ar[i]++;
        while(original <= 1000 && ar[original]){
            original = original * 2;
        }
        return original;
    }
};