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
    void flatten(TreeNode* root) {
        flattenTree(root);
    }
    TreeNode* flattenTree(TreeNode* node){
        if(node == nullptr){
            return nullptr;
        }
        TreeNode* left = flattenTree(node->left);
        TreeNode* right = flattenTree(node->right);
        if(left){
            node->right = left;
            node->left = nullptr;

            TreeNode* current = node;
            while(current->right ){
                current = current->right;
            }

            current->right = right;
        }
        else{
            node->right = right;
            node->left = nullptr;

        }
        return node;
    }
};