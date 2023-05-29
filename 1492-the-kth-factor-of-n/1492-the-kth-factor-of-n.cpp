class Solution {
public:
    int kthFactor(int n, int k) {
     int i =1 ; 
   
    vector<int>arr; 
        while(i<n+2){
        if(arr.size()==k){return arr[k-1]; }
        if(n%i==0)arr.push_back(i); 
    i+=1; 
        }
    
           return -1;
    
    
    }
};