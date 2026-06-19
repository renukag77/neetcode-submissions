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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if (p->val == q->val) {

            bool leftSame = isSameTree(p->left, q->left);
            bool rightSame = isSameTree(p->right, q->right);

            return leftSame && rightSame;
        }

        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL){
            return false;
        }
        if(subRoot-> val == root->val){
            if(isSameTree(root, subRoot))
                return true;
        }
        bool left = false;
        bool right = false;

        if(root->left !=NULL)
            left = isSubtree(root->left, subRoot);
        if(root->right != NULL)
            right =isSubtree(root->right, subRoot);
        
        return left || right;
    }
};
