#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int>array ; 
        int k = height.size()- 1 ; 
        int i = 0 ;
        while(i!=k){
        int min = std::min(height[i],height[k]); 
        array.push_back(min*(k-i)); 
        if(min == height[i])
            i +=1 ; 
        
        else{
        k-=1 ; 
    }}
    int max = 0 ;
    for (int i = 0 ; i <array.size(); i++){
        if(array[i]>=max){
            max = array[i] ; 
        }
    }
    
    return max ; 
    }
};