class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int total = m+n ; 
    vector<int>final1 ; 
    bool flag=true,flag2 =true ; 
    m-=1 ; 
    n-=1 ; 
        
        while(total--){
        if(m>=0 && n>=0){
            if(nums1[m]>=nums2[n]){
                final1.push_back(nums1[m]) ; 
                m-=1 ;
            }
            else{
               final1.push_back(nums2[n]) ; 
                n-=1 ; 
                
                
            }
            
            
        }
        
        else if(m>=0){
           final1.push_back(nums1[m]) ; 
                m-=1 ; 
        }
        else {
            final1.push_back(nums2[n]) ; 
                n-=1 ;  
            
        }
        
    }

    nums1 = final1 ;
    sort(nums1.begin(),nums1.end()) ; 
    }  };