class Solution {
public:
    int minPartitions(string n) {
     int max= INT_MIN ; 
     for(auto x: n){
     int digit = x - '0' ; 
     if(digit>max)max = digit ; 
     }
    return max; 
    
    
    }
};