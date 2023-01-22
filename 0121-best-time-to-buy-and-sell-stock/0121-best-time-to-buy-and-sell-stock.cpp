class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int minu = INT_MAX ; 
  int maxu = 0 ; 
int pointer = 0 ; 
    while(pointer<prices.size()){ 
    minu = min(prices[pointer],minu); 
    maxu =max(maxu,prices[pointer]-minu) ; 
    pointer+=1 ; 
    }
    
    return maxu ; 
    }
} ;