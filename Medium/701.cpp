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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    
    if(!root)
    return root = new TreeNode(val);


     TreeNode *follow;
     TreeNode *lead;
     lead = root;
     while(lead){
         follow = lead;
         if(lead->val<val){
            lead = lead->right;
         }
         else
         lead = lead->left;
     }
     TreeNode *newnode  = new TreeNode(val);

     if(follow->val<val)
     follow->right = newnode;
     else
     follow->left = newnode;

     return root;

        
    }
};