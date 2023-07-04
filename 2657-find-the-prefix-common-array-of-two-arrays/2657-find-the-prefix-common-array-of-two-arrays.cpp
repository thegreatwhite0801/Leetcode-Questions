class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>map1; 
        vector<int>ans(A.size(),0); 
        for(int i = 0 ; i<A.size();i++){
          
            map1[A[i]]++; 
            map1[B[i]]++;
            int count = 0 ;
            for(auto it: map1)if(it.second>=2)count+=it.second; 
              
        ans[i]+=count/2; 
        }
        

    return ans ; 
    }
};