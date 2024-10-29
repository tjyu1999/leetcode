/* insert binary tree
 *
 * input : root = [4, 2, 7, 1, 3, 6, 9]
 * output: [4, 7, 2, 9, 6, 3, 1]
 * hint  : depth first search
 */

class Solution {
public:
    TreeNode *invertTree(TreeNode *root) {
        if (root == nullptr)
            return nullptr;
        
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        root->left =  invertTree(right);
        root->right = invertTree(left);
        
        return root;
    }
};
