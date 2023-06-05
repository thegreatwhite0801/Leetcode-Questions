class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int curr_point = 0 ; 
     int maxm = INT_MIN ; 
        for(auto x: gain){
         curr_point+=x; 
        if(curr_point>maxm)maxm=curr_point; 
     }
    if(maxm<0)return 0 ; 
    return maxm ; 
    }
};