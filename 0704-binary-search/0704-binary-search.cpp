class Solution {
public:
    int search(vector<int>& nums, int target) {
        int front = 0 ; int back =nums.size()-1; 
        int mid = front+(back-front)/2; 
        while(front<=back){
            if(nums[mid]==target)return mid ; 
            if(nums[mid]>target)back=mid-1;  
            else{front=mid+1;}
            mid= front+(back-front)/2 ;
         
        }
    
    return -1 ;
    }
};


