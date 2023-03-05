class Solution {
public:
   

    
    
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        map<vector<int>,int> map1; 
        vector<int>final ; 
        for (auto x :queries){
        int temp = 0 ; 
            for(auto y :points){
                if(sqrt(pow((y[0]-x[0]),2) + pow((y[1]-x[1]),2))<=double(x[2]))temp++; 
                
            }
            final.push_back(temp); 
            
        }
    
    return final ; 
     

}
};