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
    int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;
        return countNodes(root->left)+countNodes(root->right)+1;

    }
};

// recursive soltuion is above 
// we can find out by using bfs implemenation 
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
    int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;
        
        queue<TreeNode*> q;

        int ans=0;

        q.push(root);
        while(q.size()){

            int a = q.size();

            while(a--){
                TreeNode* first = q.front();
                q.pop();
                ans++;
                if(first->left)
                q.push(first->left);
                if(first->right)
                q.push(first->right);
            }
        }

        return ans;

    }
};