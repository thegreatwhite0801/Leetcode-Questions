class Solution {
public:
    int countOperations(int num1, int num2) {
      int maxm=max(num1,num2);
int minm=min(num1,num2);
        int count = 0 ;
        while(minm!=0){
        int temp = maxm -minm ;   
      
           maxm=max(temp,minm);
      minm=min(temp,minm);
 
        count++;
        
        } 
    return count ;
    }
};