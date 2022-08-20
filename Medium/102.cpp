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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        // edge cases
        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root); // push the node of the tree

        while (!q.empty())
        {

            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++)
            {
                if (q.front()->left != NULL)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right != NULL)
                {
                    q.push(q.front()->right);
                }
                level.push_back(q.front()->val);
                q.pop();
            }
            ans.push_back(level);
        }

        return ans;
    }
};

// for more help see the video
// https://youtu.be/EoAsWbO7sqg

// He also did the same but one thing is there he took q.front() in another node then did operations with that but I did with it.

// TC = O(n)
// SC = O(n)

// n = numbers of nodes