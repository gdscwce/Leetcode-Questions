/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root) return ans;
        q.push(root);
       
        while(!q.empty()){
            queue<TreeNode*> temp_q;
            vector<int> temp;
            while(!q.empty()){
                TreeNode* node =q.front();
                temp.push_back(node->val);
                q.pop();
                if(node->left) temp_q.push(node->left);
                 if(node->right) temp_q.push(node->right);
            }
            q=temp_q;
            ans.push_back(temp);
        }
        
        for(int i=0;i<ans.size();i++){
            if(i%2){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};
