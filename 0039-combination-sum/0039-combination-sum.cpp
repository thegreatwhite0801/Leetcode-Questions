class Solution {
public:
    
    int sum(vector<int>v){
int s = 0 ; 
for(auto x :v){
s+=x; 
}
return s; 
    }
    vector<vector<int>>final ; 
    int aim =0 ; 
    
    void creator(vector<int>temp,int index,vector<int>candidates){ 
     int check=sum(temp);
      if(check==aim){sort(temp.begin(),temp.end());final.push_back(temp);return;}
      if(check>aim||temp.size()>150)return ;
      for(int i = index;i<candidates.size();i++){
      temp.push_back(candidates[i]); 
      creator(temp,i,candidates); 
      temp.pop_back();
    }
return; 
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
  aim=target; 
  creator({},0,candidates); 
  return final ;       
  
    }
};



// class Solution {
// public:
//     int aim =0 ; 
//     int sum(vector<int>v){
//         int s= 0 ; 
//         for(auto x :v){
//             s+=x; 
    
//         }
//     return s ; 
//     }
//     vector<vector<int>>final; 
// bool checker(vector<int>v){
// for(auto it:final){
//     if(it==v)return false; 
// }
// return true; 
// }

//     void creator(vector<int>temp,int index,vector<int>cand){
//       if(temp.size()!=0 && sum(temp)==aim){sort(temp.begin(),temp.end());if(checker(temp))final.push_back(temp);return;}
//        if(sum(temp)>aim)return ;
//        if(temp.size()>150)return; 
//        for(int i = index;i<cand.size();i++){
//             temp.push_back(cand[i]); 
//             creator(temp,index,cand); 
//             temp.pop_back();
//             creator(temp,i+1,cand); 
           
//        } 
//     }
    
    
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         aim = target;
//         creator({},0,candidates);
//         return final ;
//     }
// };