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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
		int f = 0;
		queue<TreeNode*> q;
		q.push(root);
		vector<vector<int>> ans;
		while(q.size()){
			vector<int> temp;
			int sz = q.size();
			for(int i=0;i<sz;i++){
				TreeNode* node = q.front();
				q.pop();
				int value = node->val;
				temp.push_back(value);
				if(node->left)q.push(node->left);
				if(node->right)q.push(node->right);
			}
			if(f)reverse(temp.begin(),temp.end());
			ans.push_back(temp);
			f ^= 1;
		}
		return ans;
	
    }
};