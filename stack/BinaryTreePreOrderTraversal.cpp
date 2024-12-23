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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preOrder(root, result);
        return result;
    }
    void preOrder(TreeNode* node, vector<int>& result){
        if(node == nullptr){
            return;
        }
        result.push_back(node->val);
        preOrder(node->left, result);
        preOrder(node->right, result);
    }
};