//Question Link --> https://leetcode.com/problems/01-matrix/

class Solution {
public:
    
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<int,int>> q;
        
        int m=mat.size(),n=mat[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j] == 0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        
        
        int level=0;
        while(!q.empty()){
            
            int qsize=q.size();
            level++;
            while(qsize-->0){
                
                auto temp=q.front();q.pop();
                
                for(int i=0;i<4;i++){
                    
                    int newr=temp.first + dx[i], newc=temp.second + dy[i];
                    
                    if(newr < 0 || newr>=m || newc < 0 || newc >= n || mat[newr][newc] != -1 ) continue;
                    
                    mat[newr][newc]=level;
                    q.push({newr,newc});
                    
                }                   
            }
        }
        
        return mat;
    }
};