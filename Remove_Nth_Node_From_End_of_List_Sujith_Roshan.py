# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # create vars
        d = ListNode(next=head)
        l = r = d
        # move r pointer n steps
        for _ in range(n):
            r = r.next
        # move r and l pointers til end
        while r.next != None:
            l = l.next
            r = r.next
        # remove nth
        l.next = l.next.next
        return d.next
