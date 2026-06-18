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
    int depth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        return 1 + max(depth(root->left), depth(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) 
            return 0;
        

        int leftSum = depth(root->left);
        int rightSum = depth(root->right);

        int currDiameter = leftSum + rightSum;

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        return max(currDiameter, max(leftDiameter, rightDiameter));
    }
};
