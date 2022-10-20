
/*
Name - Middle of the linked list
Dificulty - Easy
Problem number - 876
Link - https://leetcode.com/problems/middle-of-the-linked-list/description/
*/

//code

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode *fast=head;
      ListNode *slow= head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow;
    }
};