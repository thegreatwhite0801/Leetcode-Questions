class Solution {
public:

vector<vector<int>>final ; 

void creator(vector<int>temp,int index,vector<int>nums){ 
final.push_back(temp) ; 
for(int i = index;i<nums.size();i++){ 
    temp.push_back(nums[i]); 
    creator(temp,i+1,nums); 
    temp.pop_back(); 
}
return; 

}


   
    vector<vector<int>> subsets(vector<int>& nums) {
        creator({},0,nums);
        return final ; 
    }
};



// 1 2 3 

// final :    [] [1] [1,2] [2]
// temp  : [] [1] [1,2]
// index  : 0  1

