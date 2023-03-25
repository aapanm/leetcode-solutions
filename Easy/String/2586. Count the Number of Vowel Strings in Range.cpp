class Solution {
public:
    bool check(char s){
        return (s=='a' || s=='e'|| s=='o'|| s=='i' || s=='u');
    }
    
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            if(check(words[i].front()) && check(words[i].back())) ans++;
        }
        return ans;
    }
};