class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head,*pre=NULL,*nex;
        while(cur){
            nex=cur->next;
            cur->next=pre;
            pre=cur;
            cur=nex;
        }
        return pre;
    }
};
