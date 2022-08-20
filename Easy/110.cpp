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
class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        int x = dfsheight(root);

        // now x contains either -1 or the height of the tree
        // but we dont care the height
        // but if x==-1 it means when we are looking from down we found a node where leftheight and rightheight difference more than 1 which break the defenation of the balanced binary tree
        if (x == -1)
            return false;
        return true;
    }

    int dfsheight(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int x = -1;

        int leftside = dfsheight(root->left);
        int rightside = dfsheight(root->right);

        // below both if statements will never excuted if tree is balanced
        if (leftside == -1 || rightside == -1)
            return -1;
        
         // cout<<leftside<<" "<<rightside<<endl;
        
        if (abs(leftside - rightside) > 1)
            return -1;

        return 1 + max(leftside, rightside);

        // TC = O(n)
        //  SC = O(n)
    }
};