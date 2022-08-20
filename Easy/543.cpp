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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    
    int height(TreeNode* root, int& diameter){
        if(root==NULL)
            return 0;
        
        int leftside = height(root->left,diameter);
        int rightside = height(root->right,diameter);
        
        diameter = max(diameter,leftside+rightside);
        
        return 1+max(leftside,rightside);
        
    }
};



// in above approch i called diameter as a reference value
// but in below method i called by as a parametee which is more faster than above approch 
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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,&diameter);
        return diameter;
    }
    
    int height(TreeNode* root, int* diameter){
        if(root==NULL)
            return 0;
        
        int leftside = height(root->left,diameter);
        int rightside = height(root->right,diameter);
        
        *diameter = max(*diameter,leftside+rightside);
        
        return 1+max(leftside,rightside);
        
    }
};
