class Solution {
public:
    
    bool flag = false; 
    bool visit(vector<int>v){
    for(auto x: v){
        if(x==0)return false; 
    }
    return true; 
    }
    void checker(vector<vector<int>>&rooms,vector<int>&visited,int index){
        if(flag==true||index>=visited.size())return; 
        if(visit(visited)){flag=true;return;}
        if(visited[index]==1)return; 
        visited[index]=1; 
       if(visit(visited)){flag=true;return;}
        if(rooms[index].size()==0)return ; 
        for(int i = 0;i<rooms[index].size();i++){
            checker(rooms,visited,rooms[index][i]); 
        }
return; 
    }
    
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>visited(rooms.size(),0); 
        checker(rooms,visited,0) ;
        return flag ; 
    }
};