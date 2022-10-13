# Name= Jogeswar Panigrahi
#Difficulty= Medium
#Problem number=237
#Problem link = https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution(object):
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        if not node:
            return
        
        node.val = node.next.val
        node.next = node.next.next