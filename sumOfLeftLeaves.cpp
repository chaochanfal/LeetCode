/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
            int sum=0;
            if(root ==NULL) return 0;
            //要最左节点,就是那种在左节点但这节点又沒有左和右的子节点,
            if(root->left && !root->left->left && !root->left->right) {
                 
                 sum=root->left->val;
            }

            return sum + sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
