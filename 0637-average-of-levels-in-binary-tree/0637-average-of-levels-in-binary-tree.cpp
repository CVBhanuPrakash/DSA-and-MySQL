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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> v;
        vector<double> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        double avg = root->val;
        avg = 0;
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);
            }
            v.push_back(level);
            for(int i=0; i<level.size(); i++){
                avg += level[i]; 
            }
            avg /= level.size();
            ans.push_back(avg);
            avg = 0;
        }
        return ans;
    }
};