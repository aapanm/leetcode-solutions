//two maps

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <char, int> rN;
        unordered_map <char, int> mg;
        
        for(auto i:ransomNote) rN[i]++;
        for(auto i:magazine) mg[i]++;
        
        for(auto i=rN.begin(); i!=rN.end(); i++){
            if(i->second <= mg[i->first]){}
            else return false;
        }
        
        return true;
    }
};

//one map

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <char, int> mg;
        for(auto i:magazine) mg[i]++;
        
        for(auto i=0; i<ransomNote.size(); i++){
            mg[ransomNote[i]]--;
            if(mg[ransomNote[i]] < 0) return false;
        }
        
        return true;
    }
};