class Solution {
public:
    int triangularSum(vector<int>& nums) {
       vector<int>temp = nums ;
        while(temp.size()!=1){
            vector<int>memp2;
        for(int i = 0 ;i<temp.size()-1;i++){
            memp2.push_back((temp[i]+temp[i+1])%10); 
        } 
    
        temp=memp2; 
        }
        return temp[0]; 
        }
};