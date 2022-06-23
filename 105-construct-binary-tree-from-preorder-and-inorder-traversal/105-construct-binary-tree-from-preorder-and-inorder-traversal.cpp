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
    unordered_map<int,int>m;
	int idx;
	TreeNode*solve(vector<int>inorder,vector<int>preorder,int start,int end)
	{
		if(start>end)
			return NULL;
		int curr=preorder[idx];
		idx++;
		TreeNode*node=new TreeNode(curr);
		if(start==end)
			return node;
		int mid=m[curr];// search in inorder 
		node->left=solve(inorder,preorder,start,mid-1);
		node->right=solve(inorder,preorder,mid+1,end);

		return node;
	}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
		for(int i=0;i<n;i++)
		{
			m[inorder[i]]=i;
		}
		idx=0;
		TreeNode*root=solve(inorder,preorder,0,n-1);
		return root;
    }
};