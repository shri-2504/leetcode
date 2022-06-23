/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         string encoding = "";
        queue<TreeNode*> qu;
        if (root == NULL)
        {
            encoding += 'N';
            return encoding;
        }
        qu.push(root);
        int count = 1;
        while (!qu.empty()){
            while (count > 0){
                TreeNode* node = qu.front();
                qu.pop();
                count--;
                if (node != NULL){
                    string str = to_string(node->val);
                    encoding += str;
                    encoding += ',';
                }
                else{
                    encoding += 'N';
                    encoding += ',';
                }
                if (node != NULL)
                {
                    qu.push(node->left);
                    qu.push(node->right);
                }
            }
            count = qu.size();
         }
         return encoding;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
         if (data.length() == 1)
            return NULL;
        int right = 0;
        int left=0;
        queue<TreeNode*> qu;
        string number = "";
        while (right < data.length() && data[right] != ','){
            number += data[right];
            right++;
        }
        int num = stoi(number);
        number.clear();
        TreeNode* root = new TreeNode(num);
        qu.push(root);
        int count = 1;
        while (!qu.empty()){
            while (count > 0){
                TreeNode* node = qu.front();
                qu.pop();
                count--;
                left = right + 1;
                while (left < data.length() && data[left] != ','){
                    number+=data[left];
                    left++;
                }
                if (number != "N"){
                    num = stoi(number);
                    node->left = new TreeNode(num);
                    qu.push(node->left);
                    number.clear();
                }
                else
                    number.clear();
                right = left+1;
                while (right < data.length() && data[right] != ','){
                    number+=data[right];
                    right++;
                }
                if (number != "N"){
                    num = stoi(number);
                    node->right = new TreeNode(num);
                    qu.push(node->right);
                    number.clear();
                }
                else
                    number.clear();
            }
            count = qu.size();
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));