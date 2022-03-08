//Question Link --> https://leetcode.com/problems/reverse-linked-list/


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* curr=head, *forw=head->next,*prev=NULL;
        
        while(curr != NULL){
            
            curr->next=prev;
            prev=curr;
            curr=forw;
            if(forw)
                forw=forw->next;
            
        }
        
        return prev;
        
    }
};