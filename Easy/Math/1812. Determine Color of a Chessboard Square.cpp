class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int hor = coordinates[0] - 'a' + 1;
        int col = coordinates[1] - '1' + 1;
        
        if((hor+col)%2) return true;
        
        return false;
    }
};