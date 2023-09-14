// tow pointers + hashmap

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map <int, int> m;
        int s = nums.size() - 1;
        
        for(int i=s; i>=0; --i){
            if(m.count(nums[i])){
                nums[i] = -1010;
            }else{
                m[nums[i]]++;
            }
        }
        
        int c = 0;

        for(int i=0; i<s+1; ++i){
            if(nums[i] != -1010) nums[c++] = nums[i];
        }
        return c;
    }
};

//only two pointers

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int c = 1, s = nums.size();
        
        for(int i=1; i<s; ++i){
            if(nums[i] != nums[i-1]) nums[c++] = nums[i];
        }
        
        return c;
        
    }
};