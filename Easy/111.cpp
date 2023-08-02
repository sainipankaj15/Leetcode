// BFS solution



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
    int minDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int ans = 0;
        
        while(q.size()){
            ans++;
            
            int queue_size = q.size();
            
            for(int i=0;i<queue_size;i++){
                TreeNode* ele = q.front();
                q.pop();
                 if(ele->left)
                q.push(ele->left);
                if(ele->right)
                q.push(ele->right);
                
                if(ele->left==NULL && ele->right==NULL)
                    return ans;
            }
        }
        
        return -1;
    }
};










// DFS solution 
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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        if(root->left==NULL && root->right==NULL)
            return 1;
        
        if(root->left==NULL)
            return 1+minDepth(root->right);
        if(root->right==NULL)
            return 1+minDepth(root->left);
        
        
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};