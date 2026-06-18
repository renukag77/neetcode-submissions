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
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int depth = 0;
        int left_curr = 0;
        int right_curr = 0;
        if(root->left != NULL){
            left_curr++;
        }
        if(root->right != NULL){
            right_curr++;
        }

        left_curr = maxDepth(root->left);
        right_curr = maxDepth(root->right);
        depth = max(left_curr, right_curr);
        return depth+1;
    }
};
