/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        
      
        // get the middle node, reverse it, check if they are same
        ListNode fast = head,slow=head;
        while(fast!=null && fast.next!=null){
            fast = fast.next.next;
            slow = slow.next;
        }
        
        // in case of odd nodes, let right half be smaller, push the slow{middle} node
        if(fast!=null)slow = slow.next;
        // slow is the middle pointer
        ListNode l2 = reverse(slow);
        ListNode l1 = head;
        
        // check if are same
        while(l2!=null){
            if(l1.val!=l2.val)return false;
            l1 = l1.next;
            l2 = l2.next;
        }
        return true;
        
        
        
    }
    
    private ListNode reverse(ListNode head){
        if(head==null || head.next==null)return head;
        ListNode newHead = reverse(head.next);
        ListNode cur = head.next;
        cur.next = head;
        head.next=null;
        return newHead;
    }
}