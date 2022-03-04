//Question Link --> https://leetcode.com/problems/permutation-in-string/


class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        
        int ns1=s1.size(),ns2=s2.size();
        string temp;

        vector<int> arr(26,0);
        vector<int> temparr;
        
        for(auto i:s1)
            arr[i-'a']++;
        
        for(int i=0;i<=ns2 - ns1; i++){ 
            
            temp=s2.substr(i,ns1);
            temparr=arr;
            
            for(auto j:temp)
                temparr[ j - 'a']--;
            
            //check if ful temparr is zero then return true
            int count=0;
            for(auto j:temparr){
                if(j == 0)
                    count++;
            if(count == 26)
                return true;
                    
                    
            }
        }
        return false;
    }
};