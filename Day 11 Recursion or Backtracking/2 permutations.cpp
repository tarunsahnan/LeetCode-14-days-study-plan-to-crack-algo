//Question Link --> https://leetcode.com/problems/permutations/

class Solution {
public:
    
    void helper(vector<vector<int>>& res, vector<int>& strsofar, int index, vector<int>& nums){
        
        if(nums.size() == index){
            res.push_back(strsofar);
            return;
        }
        
        for(int i=index;i<nums.size();i++){
            
            swap(nums[i],nums[index]);
            strsofar.push_back(nums[index]);
            helper(res,strsofar,index+1,nums);
            strsofar.pop_back();
            swap(nums[i],nums[index]);
            
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> strsofar;
        
        helper(res,strsofar,0,nums);
        
        return res;
    }
};