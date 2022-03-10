//Question Link --> https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size() <=2){
            
            if(nums.size() ==1) return nums[0];
            if(nums.size()==2) return max(nums[0],nums[1]);
            
        }
        
        int prev_1=0,prev_2=0;
        
        for(int i=1;i<nums.size()+1;i++){
            
            int temp= prev_1;
            prev_1=max(prev_1, prev_2+nums[i-1]);
            prev_2=temp;
            
        }
        
        return prev_1;
    }
};