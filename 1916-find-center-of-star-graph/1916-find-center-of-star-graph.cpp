class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int prev= 0 ; 
        int one=edges[0][0]; 
        int two=edges[0][1];
        if(one==edges[1][0])return one; 
        if(one==edges[1][1])return one;
        if(two==edges[1][0])return two;  
        if(two==edges[1][1])return two; 

return 0 ; 
    }
};