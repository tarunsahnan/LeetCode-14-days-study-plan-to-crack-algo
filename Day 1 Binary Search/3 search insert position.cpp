//Question Link --> https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int hi=nums.size()-1,lo=0,mid;
        while(hi >= lo){
            mid=(hi+lo)/2;
            
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};