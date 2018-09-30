/*
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (43.78%)
 * Total Accepted:    185.1K
 * Total Submissions: 422.3K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the bottom-up level order traversal of its
 * nodes' values. (ie, from left to right, level by level from leaf to root).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its bottom-up level order traversal as:
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 * 
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
    vector<vector<int>> r;
    vector<vector<int>> result;

    void levelInsert(TreeNode* node, int level) {
        if (node) {
            if (r.size() < level+1) {
                vector<int> t;
                r.push_back(t);
            }
            r[level].push_back(node->val);
            if (node->right) {
                levelInsert(node->right, level + 1);
            }
            if (node->left) {
                levelInsert(node->left, level + 1);
            }
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        levelInsert(root, 0);

        for (int i=r.size(); i>0; i--) {
            vector<int> t;
            for (int j=r[i-1].size(); j>0; j--) {
                t.push_back(r[i-1][j-1]);
            }
            if (t.size() > 0) {
                result.push_back(t);
            }            
        }
        return result;
    }
};
