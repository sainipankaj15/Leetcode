//Recursive approch 
void preorder(TreeNode* root, vector<int>& v){
    if(root==NULL)
        return ;
    v.push_back(root->val);
    preorder(root->left,v);
    preorder(root->right,v);
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        preorder(root,ans);
        return ans;
    }
};


//using stack

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        //edge cases
        if(root==NULL)
            return ans;
        
        stack<TreeNode*> s;
        
        s.push(root);
        
        while(!s.empty()){
            
            TreeNode* node = s.top();
            s.pop();
            ans.push_back(node->val);
            if(node->right!=NULL)
                s.push(node->right);
           
            if(node->left!=NULL)
                s.push(node->left);
            
        }
        
     
        return ans;
    }
};

//stack logic 
// first push the node
// then push the value in the result vector 
// check for left if it exist then push 
// check for right if it exist then push













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
			