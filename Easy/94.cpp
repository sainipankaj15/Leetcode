// Recursive solution
// struct treenode wala code bhi yahi likha hota h

void inorder(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->val);
    inorder(root->right, v);
}
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> ans;
        inorder(root, ans);
        return ans;
    }
};
// TC = O(n)
// SC = O(n)

// n = numbers of nodes

// second method using stack 
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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        if(!root){
            return ans;
        }
        
        stack<TreeNode*> st;
        
        TreeNode* node = root;
        
        while(true){
            if(node){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.size()==0)
                {
                    return ans;
                    // so we can use break here then return in the end 
                    // but by default returning it's end the program
                }
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        
        
        return ans;      
    }
};


// TC = O(n)
// SC = O(n) in the worst case

// n = numbers of nodes













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
			