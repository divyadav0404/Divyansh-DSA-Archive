//log2n as binary search tree it is , recursive sol..
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
class Solution { //O(h) → (log n best, n worst) tc
// O(h) → recursion stack sc
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if ( root == nullptr) return nullptr;
        if ( val == root-> val) return root;
        if ( val<root-> val)

return searchBST(root->left , val);
else
return searchBST( root-> right , val);
    }
}; //left choti value , right badi value ..
