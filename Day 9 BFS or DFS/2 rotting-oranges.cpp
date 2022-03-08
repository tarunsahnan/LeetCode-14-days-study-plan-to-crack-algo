//Question Link --> https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        int m=grid.size(),n=grid[0].size(),fresh=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j] == 1) fresh++;
            }
        }
        
        if(q.size()==0 and fresh==0) return 0;
        
        int  min=0;
        while(q.size()){
            
            min++;
            int qsize=q.size();
            
            if(q.size() == 0) return 0;
            
            while(qsize-- > 0){
                
                auto curr=q.front();q.pop();
                
                for(int i=0;i<4;i++){
                    
                    int newr=curr.first + dx[i];
                    int newc=curr.second + dy[i];
                    
                    if(newr<0 || newr>=m || newc<0 || newc>=n || grid[newr][newc] == 0 || grid[newr][newc] == 2)
                        continue;
                    fresh--;
                    grid[newr][newc] = 2;
                    q.push({newr,newc});
                }   
            }
            
        }
        
        return fresh==0?min-1:-1;
    }
};