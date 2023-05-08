class Solution {
public:
    int maxCoins(vector<int>& piles) {
     int mycoin = 0 ; 
    sort(piles.begin(),piles.end(),greater<int>()); 
    for(int i =0;i<piles.size();i++){
        if(i%2==1){
            cout<<piles[i];
            mycoin+=piles[i]; 
                  piles.pop_back();
                  }
    }
    return mycoin;
    }
};