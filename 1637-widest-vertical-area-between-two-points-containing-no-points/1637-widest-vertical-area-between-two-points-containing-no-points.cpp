class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
       sort(begin(points), end(points), [&](const auto &s1, const auto &s2){ return s1[0] < s2[0]; });
    int maxm= INT_MIN; 
    int area = 0 ; 
    for(auto x :points){ 
    
        
        
        
        
        
    if(x[0]>maxm){
    if(x[0]!=points[0][0]){
    area= max(x[0]-maxm,area); 
    
    
    
    }
    maxm= x[0];
    
        
    }
    
    
    
    }
    return area; 
    
    
    
    
    }
};