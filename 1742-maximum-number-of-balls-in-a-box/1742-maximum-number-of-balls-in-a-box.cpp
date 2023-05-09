class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
     unordered_map<int,int>map1; 
    int maxm= INT_MIN ;
        for(int i = lowLimit ; i<=highLimit;i++){
        string temp = to_string(i); 
        int bxn = 0; 
        for(auto x :temp){
            string s = ""; 
            s+=x ;
            bxn+=stoi(s); 
        }
    
    map1[bxn]++; 
    maxm = max(maxm,map1[bxn]); 
    
    }
    return maxm ; 
    }
};