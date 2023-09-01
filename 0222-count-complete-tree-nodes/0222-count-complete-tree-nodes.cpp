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
    void check(TreeNode* root, int &count){
        if(root == NULL) return;
        check(root->left, count);
        if(root != NULL) count++;
        check(root->right, count);
    }
    int countNodes(TreeNode* root) {
        int count = 0;
        check(root, count);
        return count;
    }
};