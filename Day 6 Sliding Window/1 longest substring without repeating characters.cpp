//Question Link --> https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left=0,res=0;
        
        set<char> hash;
        
        for(int i=0;i<s.size();i++){
            
            while(hash.find(s[i]) != hash.end()){
                hash.erase(s[left]);
                left++;
            }
            hash.insert(s[i]);
            res=max(res,i-left+1);
        }
        
        return res;
    }
};