//Question Link --> https://leetcode.com/problems/combinations/

class Solution {
public:
    
    vector<vector<int>> res;
    void helper(int index,int &k, vector<int>& strsofar,int n){
        
        
        
        if(strsofar.size()==k){
            res.push_back(strsofar);
            return;   
        }
        
        if(strsofar.size() > k || index==n+1) return;
        
        for(int i=index;i<n+1;i++){
            
            strsofar.push_back(i);
            helper(i+1,k,strsofar,n);
            strsofar.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
    
        
        vector<int> strsofar;
        
        helper(1,k,strsofar,n);
        
        return res;
        
    }
};