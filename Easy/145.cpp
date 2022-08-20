
// Recursive solution

void postorder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    postorder(root->left, v);
    postorder(root->right, v);
    v.push_back(root->val);
}

class Solution
{
public:
    vector<int> postorderTraversal(TreeNode *root)
    {

        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
};




// using 2 stacks

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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;

        if (root == NULL)
            return ans;

        stack<TreeNode *> st1;
        stack<TreeNode *> st2;

        TreeNode *node = root;

        st1.push(node);
        while (!st1.empty())
        {

            node = st1.top();
            st2.push(node);
            st1.pop();

            if (node->left)
                st1.push(node->left);
            if (node->right)
                st1.push(node->right);
        }

        while (!st2.empty())
        {
            ans.push_back(st2.top()->val);
            st2.pop();
        }

        return ans;
    }
};




// using 1 stack 
// using 1 stacks

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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        stack<pair<TreeNode *, bool>> st;

        pair<TreeNode *, bool> curr;
        st.push({root, false});

        while (st.size())
        {
            curr = st.top();
            // cout<<st.top();
            st.pop();
            // cout<<curr;
            if (curr.second == true)
            {
                ans.push_back(curr.first->val);
            }
            else
            {
                st.push({curr.first, true});

                if (curr.first->right)
                {
                    st.push({curr.first->right, false});
                }
                if (curr.first->left)
                {
                    st.push({curr.first->left, false});
                }
            }
        }

        return ans;
    }
};





// using 1 stack
// using 1 stacks

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
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        stack<pair<TreeNode *, bool>> st;

        // auto curr;
        st.push({root, false});

        while (st.size())
        {
            auto node = st.top().first;
            auto visited = st.top().second;

            st.pop();

            if (visited)
            {
                ans.push_back(node->val);
            }
            else
            {
                st.push({node, true});

                if (node->right != NULL)
                {
                    st.push({node->right, false});
                }
                if (node->left != NULL)
                {
                    st.push({node->left, false});
                }
            }
        }

        return ans;
    }
};












    // all three by one code ;
		// Preorder, Inorder, postorder
		vector<int> preorder,inorder,postorder;
		
		if(root==NULL)
			return { };
		
		stack<pair<TreeNode*,int>> st;
		
		st.push({root,1});
		
		while(s.size()){
			auto node = st.top().first;
			auto num = st.top().second;
			
			st.pop();
			if(num==1){
				num++;
				preorder.push_back(node->val);
				st.push({node,num});
				if(node->left)
					st.push({node->left,1});
			}
			else if(num==2){
				num++;
				inorder.push_back(node->val);
				st.push({node,num});
				if(node->right)
					st.push({node->right,1});
			}
			else {
				postorder.push_back(node->val);
			}
			
		}
			
			return preorder;
			return inorder;
			return postorder;
			