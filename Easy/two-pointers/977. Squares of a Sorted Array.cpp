class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int l=A.size(),j=l-1;
        
        vector<int> result;
        

        for(int m=0;m<l;m++){
            if(A[m]>=0){
                j=m;break;
            }
        }

        for(int i=0;i<l;i++)
        {
            A[i]*=A[i];
            
        }
        
        int k=j,i=j-1;
       
         while(i>=0 && k<l){
               if(A[i]<A[k]){
                   result.push_back(A[i]);
                   i--;
               }
               else{
                   result.push_back(A[k]);
                   k++;
               }
           }

            while(i>=0){
                result.push_back(A[i]);i--;
            }
        
            while(k<l){
                result.push_back(A[k]);k++;
            }
        
            return result ;
    }
};
