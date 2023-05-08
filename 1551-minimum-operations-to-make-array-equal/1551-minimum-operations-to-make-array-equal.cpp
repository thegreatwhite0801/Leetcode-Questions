class Solution {
public:
    int minOperations(int n) {
       vector<int>array ; 
        
        for(int i =0 ; i<n;i++){
        array.push_back(i*2+1);
        
       }
   
        int count =0 ;
    int pivot =0 ; 
        if(n%2==0){
            pivot=array[n/2]-1; 
        }
        else{
            n=n/2;
            pivot=array[n]; 
        }
        cout<<pivot; 
    for(auto x :array){
     if(pivot>x){
         count+=abs(pivot-x); 
     }
      else{
          break;
      }  
    }
        return count ;
    }
};


