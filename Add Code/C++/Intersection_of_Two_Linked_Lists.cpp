/* NAME: Intersection of two linked lists
   Difficulty: Easy
   Problem no- 160
   //Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/
*/

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;

        if (headA == NULL || headB == NULL)
            return NULL;

        while (ptr1 != ptr2)
        {
            if (ptr1 == NULL)
            {
                ptr1 = headB;
            }
            else
            {
                ptr1 = ptr1->next;
            }
            if (ptr2 == NULL)
            {
                ptr2 = headA;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        return ptr1;
    }
};
