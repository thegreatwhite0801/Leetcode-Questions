class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
      unordered_map<int,int>map1; 
        int final = 0 ; 
      int maxm = INT_MIN; 
        for(auto x:rectangles){
       
        
            int minm = min(x[0],x[1]); 
            map1[minm]++; 
        if(minm>maxm){maxm=minm; }
        }
    return map1[maxm] ;
    }
};