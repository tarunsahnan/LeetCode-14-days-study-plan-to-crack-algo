//Question Link --> https://leetcode.com/problems/letter-case-permutation/

class Solution {
public:
    
    void helper(string& s, int index,vector<string>& res){
        
        if(index == s.size()){
            // if(find(res.begin(),res.end(),s) == res.end())
                res.push_back(s);
            return;
        }
        
        char temp=s[index];
        
        s[index]=islower(temp)?toupper(temp):tolower(temp);
                
        helper(s,index+1,res);
        
        if(isalpha(temp)){
            s[index]=temp;
            helper(s,index+1,res);
        }
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        
        helper(s,0,res);
        return res;
    }
};