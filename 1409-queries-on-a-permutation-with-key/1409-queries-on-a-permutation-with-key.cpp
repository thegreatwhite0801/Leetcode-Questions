class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
   vector<int>vec; 
    vector<int>final;
        for(int i = 1 ;i<m+1;i++){
        vec.push_back(i);
    } 
        
        for(auto x: queries ){
        
      
            for(int i = 0 ;i<vec.size();i++){
           if(vec[i]==x){
            cout<<i<<endl;
             final.push_back(i);
               auto it = vec.begin() + i;
            vec.erase(it); 
      
        
               break; 
           
           }
       }
        vec.insert(vec.begin(),x); 
        }
        
   return final; 
    }
};