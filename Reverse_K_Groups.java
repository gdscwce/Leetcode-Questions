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
    public static void main(String[] args) {
        insertion(1);
        insertion(2);
        insertion(3);
        insertion(4);
        insertion(5);
    }

    static Node ROOT;

    static class Node {
        Node NEXT;
        int data;

        Node(int d) {
            data = d;
            NEXT = null;
        }
    }
    
    static void insertion(int item) {
        // LinkedList list = new LinkedList();
        if (ROOT == null) {
            ROOT = new Node(item);
            System.out.println(item + " inserted");
            return;
        }
        Node TEMP = ROOT;
        while (TEMP.NEXT != null) {
            TEMP = TEMP.NEXT;
        }
        TEMP.NEXT = new Node(item);
        System.out.println(item + " inserted");
    }

    static void traverse() {
        Node TEMP = ROOT;
        while (TEMP.NEXT != null) {
            System.out.print(TEMP.data + " --->");
            TEMP = TEMP.NEXT;
        }
        System.out.println(TEMP.data + " --->");
    }

    public Node reverseKGroup(Node head, int k) {
        int node_size = 0;
        Node temp = head;
        while(temp != null){
            temp = temp.next;
            node_size++;
        }
        int total_count = node_size/k;
        System.out.println(total_count);
        temp = head;
        Node first = head;
        int count = 0;
        while(total_count != count){
            int f_count = 1;
            int t_count = k;
            int value = k-1;
            while(value > 0){
                temp = temp.next;
                value--;
            }
            while(f_count < t_count){
                System.out.println(f_count);
                int t = first.val;
                first.val = temp.val;
                temp.val = t;
                f_count++;
                t_count--;
            }
            first = temp.next;
            temp = temp.next;
            count++;
        }
        System.out.println(head.val);
        return head;
    }
}