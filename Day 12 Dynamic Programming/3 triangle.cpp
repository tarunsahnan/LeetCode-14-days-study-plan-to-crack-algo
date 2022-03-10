//Question Link --> https://leetcode.com/problems/triangle/ 

class Solution {
public:
    
    int helper(vector<vector<int>>& tri, vector<vector<int>>& dp,int level,int index){
        
        if(level>=tri.size() || index>=tri[level].size())
            return 0;
        
        if(dp[level][index] != -1) return dp[level][index];
        
        return dp[level][index] = tri[level][index] + min(helper(tri,dp,level+1,index),helper(tri,dp,level+1,index+1));
        
    }
    
    
    int minimumTotal(vector<vector<int>>& tri) {
        
        int level=tri.size();
        vector<vector<int>> dp(level,vector<int>(level,-1));
        
        return helper(tri,dp,0,0);
        
    }
};