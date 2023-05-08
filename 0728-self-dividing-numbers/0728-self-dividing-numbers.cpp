class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
     vector<int>ans ; 
        for(int i = left;i<right+1;i++){
         if(i%10!=0){
             int temp = i ; 
             bool flag=true ; 
             while(temp>0){
                 int rem= temp%10 ; 
                 temp=temp/10;
                 if(rem!=0){
                 if(i%rem!=0){flag=false ;}}
                 else{flag=false; }
             }
         if(flag)ans.push_back(i); 
         
         
         }
         
     }   
    return ans; 
    
    
    
    }
};