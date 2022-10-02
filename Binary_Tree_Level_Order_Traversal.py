
#Name - Binary Tree Level Order Traversal
#Dificulty - Medium
#Problem number - 102
#Link - https://leetcode.com/problems/binary-tree-level-order-traversal/


class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root is None:
            return []
        ans=[]
        queue =[]
        queue.append(root)        
        while len(queue)>0:
            list=[]
            for i in range(len(queue)):
                node=queue.pop(0)
                list.append(node.val)
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            ans.append(list)
        return ans
            
        
