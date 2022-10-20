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
    bool isCousins(TreeNode* root, int x, int y) {
    
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            unordered_map<int,int> mp;
            int sz = q.size();
            while(sz--)
            {
                TreeNode *tmp = q.front();
                q.pop();
                mp[tmp->val]++;
                if(tmp->left && tmp->right)
                {
                    if((tmp->left->val == x && tmp->right->val == y) || (tmp->left->val == y && tmp->right->val == x))
                        return false;
                }
                
                if(mp.find(x) != mp.end() && mp.find(y) != mp.end())
                    return true;
                
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                     
            }
            
        }
        return false;
    }
};

















