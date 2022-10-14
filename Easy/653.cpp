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
    bool findTarget(TreeNode* root, int k) {
        TreeNode *curr=root;
        map<int,int> m;
        queue<TreeNode*> q;

        q.push(curr);
         
         while(q.size()){
             TreeNode *first = q.front();
             q.pop();
             if(first->left)
             q.push(first->left);
             if(first->right)
             q.push(first->right);
              if(m.find(k-first->val)!=m.end())
              return 1;
              else
              m[first->val]++;
         }

     // yadi yaha tak bhi nahi mila it means nahi h 
     return 0;

    }
};