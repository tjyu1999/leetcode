/* binary tree inorder traversal
 * 
 * input : root = [1, null, 2, 3]
 * output: [1, 3, 2]
 */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> ans;
        stack<TreeNode *> st;
        
        while (root != nullptr || !st.empty()) {
            while (root != nullptr) {
                st.push(root);
                root = root->left;
            }
            
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            root = root->right;
        }
        
        return ans;
    }
};
