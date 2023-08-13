class Solution {
public:
   
   int sum(vector<int>v){
       int s= 0 ; 
       for(auto x:v){
           s+=x; 
       }
   
   return s ;
   }
   vector<vector<int>>final ; 

  
   int n = 0 ; 
   int aim =0 ; 
   
   void creator(vector<int>temp,int index,vector<int>nums){
       if(sum(temp)==aim){final.push_back(temp);}
       if(sum(temp)>aim||temp.size()>n)return;
       for(int i = index ; i<nums.size();i++){
           if(i>index&&nums[i]==nums[i-1]){
               continue; 
           }
           else{
           temp.push_back(nums[i]); 
           creator(temp,i+1,nums); 
           temp.pop_back(); 
           }
       }  
   }
   
   
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>sorted= candidates; 
       aim =target ; 
        n=sorted.size(); 
        sort(sorted.begin(),sorted.end()); 
        creator({},0,sorted);
        return final ;
    }
};