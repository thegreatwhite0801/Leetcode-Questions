class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0 ; 
        unordered_map<int,int>map1; 
        vector<int>div = {3,5,7}; 
        for(auto x : div){
        for(int i = 1;i<n ;i++){
           int temp = x*i; 
            if(temp<=n)map1[temp]++ ;
            else{break; }
        }}
    
    for(auto it:map1){
        sum+=it.first ; 
    }
    return sum ;
    }
    
};