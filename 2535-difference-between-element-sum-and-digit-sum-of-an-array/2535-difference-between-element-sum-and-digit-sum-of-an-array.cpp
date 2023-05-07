class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int elsum = 0 ; 
    int digsum= 0 ;
        for (auto x :nums){
            elsum+=x; 
            string temp= to_string(x); 
            for(auto y:temp){
                string p= ""; 
                p+=y; 
                digsum+=stoi(p);
            }
        }
    return abs(elsum-digsum); 
    }
};