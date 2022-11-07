//iterative break merge solution

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector <int> s;
        vector <int> l;
        
        int c = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] < pivot) s.push_back(nums[i]);
            if(nums[i] == pivot) c++;
            if(nums[i] > pivot) l.push_back(nums[i]);
        }
        
        int i  = 0;
        
        while(i < s.size()){
            nums[i] = s[i];
            i++;
        }
        
        while(c){
            nums[i++] = pivot;
            c--;
        }
        
        while(c < l.size()){
            nums[i++] = l[c++];
        }
        
        return nums;
        
    }
};

//three pointer solution

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector <int> res (nums.size());
        int l = 0, s = 0, h = 0;
        
        int c = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] < pivot) l++;
            if(nums[i] == pivot) s++;
        }
        
        h = l + s;
        s = l;
        l = 0;
        
        for(auto n : nums){
            if(n < pivot) res[l++] = n;
            if(n == pivot) res[s++] = n;
            if(n > pivot) res[h++] = n;
        }
        
        return res;
    }
};