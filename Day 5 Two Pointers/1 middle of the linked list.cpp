//Question Link --> https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow=head, *fast=head;
        
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
            if(fast->next) fast=fast->next;
        }
        
        return slow;
        
    }
};