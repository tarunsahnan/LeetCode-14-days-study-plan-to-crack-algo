//Question Link --> https://leetcode.com/problems/merge-two-sorted-lists/


class Solution {
public:
    
    class cmp{
        public:
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     
        if(list1 == NULL and list2 == NULL) return NULL;
        
        priority_queue<ListNode*,vector<ListNode*>, cmp> pq;
        
        if(list1) pq.push(list1);
        if(list2) pq.push(list2);
        
        
        ListNode Dummy;
        ListNode* itr=&Dummy;
        
        while(pq.size()){
            
            ListNode* temp=pq.top();pq.pop();
            ListNode* newNode=new ListNode(temp->val);
            itr->next=newNode;
            itr=itr->next;
            
            if(temp->next){
                temp=temp->next;
                pq.push(temp);
            }
            
            
        }
        return Dummy.next;
    }
};