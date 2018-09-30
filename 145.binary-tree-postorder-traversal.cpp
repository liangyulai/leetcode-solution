/*
 * [145] Binary Tree Postorder Traversal
 *
 * https://leetcode.com/problems/binary-tree-postorder-traversal/description/
 *
 * algorithms
 * Hard (44.41%)
 * Total Accepted:    204.5K
 * Total Submissions: 459.8K
 * Testcase Example:  '[1,null,2,3]'
 *
 * Given a binary tree, return the postorder traversal of its nodes' values.
 * 
 * Example:
 * 
 * 
 * Input: [1,null,2,3]
 * ⁠  1
 * ⁠   \
 * ⁠    2
 * ⁠   /
 * ⁠  3
 * 
 * Output: [3,2,1]
 * 
 * 
 * Follow up: Recursive solution is trivial, could you do it iteratively?
 * 
 */
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> pre;        

        if (root) {
            if (root->left) {
                for (auto it:postorderTraversal(root->left)) {
                    pre.push_back(it);    
                }            
            }
            if (root->right) {
                for (auto it:postorderTraversal(root->right)) {
                    pre.push_back(it);    
                }            
            }
            pre.push_back(root->val);
        }
        
        return pre;
    }
};
