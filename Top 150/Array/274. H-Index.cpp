class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int hIndex = 0;
        int tmphIndex;
        for(int i=0; i<citations.size(); ++i){
            int remainingNoOfPublicationWithCurr = citations.size()-i;
            int currCitation = citations[i];
            if(currCitation <= remainingNoOfPublicationWithCurr){
                tmphIndex = currCitation;
            }else{
                tmphIndex = remainingNoOfPublicationWithCurr;
            }
            hIndex = max(hIndex, tmphIndex);
        }
        return hIndex;
    }
};