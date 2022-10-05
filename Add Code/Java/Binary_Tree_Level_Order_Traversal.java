// Binary Tree Level Order Traversal
// Dificulty - Medium
// Problem number - 102
// Link -https://leetcode.com/problems/binary-tree-level-order-traversal/


// Code 
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
           List<List<Integer>> levelorder = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        
        queue.add(root);
        while(!queue.isEmpty()){
            int count = queue.size();
            List<Integer> level = new ArrayList<Integer>();
            for(int i = 0 ; i < count ; i++){
                TreeNode temp = queue.poll();
                if(temp != null){
                    level.add(temp.val);
                    queue.add(temp.left);
                    queue.add(temp.right);
                }
                    
            }
            levelorder.add(level);
        }
        levelorder.remove(levelorder.size() - 1 );
        return levelorder;
    }
}
