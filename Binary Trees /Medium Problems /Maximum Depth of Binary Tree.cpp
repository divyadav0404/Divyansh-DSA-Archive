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
class Solution { //Tc and sc at worst case will be o(n) only.. //easy solution
public:
    int maxDepth(TreeNode* root) {
       if (root == NULL) return 0; // if empty tree
        int lh = maxDepth( root->left); // go till max of left len
        int rh = maxDepth( root-> right); // go till max of right len
        return 1 + max(lh , rh); //the main recursive logic / formulae..
    }
};
