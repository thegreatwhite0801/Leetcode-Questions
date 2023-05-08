class Solution {
public:
    int commonFactors(int a, int b) {
        int count =0 ; 
        int minone =min(a,b); 
        for(int i =1 ;i<=minone;i++){
            if(a%i==0&&b%i==0)count++;
        }
    return count ;
    }
};