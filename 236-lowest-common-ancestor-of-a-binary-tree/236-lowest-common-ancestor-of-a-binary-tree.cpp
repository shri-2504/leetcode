/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
     TreeNode *res;
    bool flag=true;
    
    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root!=NULL && flag)
        {
            bool a=false, b=false,c=false,d=false;
            
            if(root==p) a=true;
            if(root==q) b=true;
            
            c=dfs(root->left,p,q);
            d=dfs(root->right,p,q);
            
            int x = a+b+c+d; // if any two are true, that's enough
            
            if(x>1)
            {
                res=root;
                flag=false;
            }
            
            if((a||c) || (d||b)) return true;
            
            return false;
            
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          dfs(root,p,q);
          return res;
    }
};