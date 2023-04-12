class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int check = static_cast<int>(coordinates[0]); 
        int first = check-96; 
        int second = coordinates[1]-'0'; 
        if(first%2==0&&second%2==0)return false ;
        if(first%2==0||second%2==0)return true ; 
        return false; 
                
    }
};