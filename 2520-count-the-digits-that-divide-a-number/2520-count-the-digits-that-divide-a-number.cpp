class Solution {
public:
    int countDigits(int num) {
        string t =to_string(num); 
        int count=0 ; 
        for(auto it :t){
            string p=""; 
            p+=it; 
            int temp =stoi(p); 
            if(num % temp==0)count++ ; 
        }
    
    return count ; 
    
    }
};