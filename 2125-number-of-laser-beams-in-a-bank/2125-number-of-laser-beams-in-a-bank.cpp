class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
       int final_ans= 0 ;
        int prev = 0 ;
        for(auto x : bank){
            int count =0 ; 
            for(auto y : x){
                if(y=='1'){
                    count++; 
                }
            }
        final_ans+=prev*count; 
           if(count!=0)prev =count ; 
        
        }
    return final_ans ;
    }
};