/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> L1;
        vector<int> L2;
         ListNode* temp1=l1;
         ListNode* temp2=l2;
        while(temp1){
            L1.push_back(temp1->val);
            temp1=temp1->next;
        }
         while(temp2){
            L2.push_back(temp2->val);
            temp2=temp2->next;
        }
        if(L1.size()>L2.size()){
            int size=L1.size()-L2.size();
            //reverse(L2.begin(),L2.end());
            while(size--)L2.push_back(0);
            //reverse(L2.begin(),L2.end());
        }
        else{
            int size=L2.size()-L1.size();
            //reverse(L1.begin(),L1.end());
            while(size--)L1.push_back(0);
            //reverse(L1.begin(),L1.end());
        }
        vector<int> ans;
        int carry=0;
        for(int i=0;i<L2.size();i++)
        {
            int sum=L2[i]+L1[i]+carry;
            //cout<<"sum: "<<sum<<endl;
            carry=sum/10;
            ans.push_back(sum%10);
        }
        if(carry!=0)
        ans.push_back(carry);
        //reverse(ans.begin() , ans.end());
        
        ListNode *sumHead=NULL;
        ListNode *traverse=NULL;
        for(int i=0;i<ans.size();i++) {
            ListNode *temp = new ListNode(ans[i]);
            
            if(sumHead == NULL) {
                sumHead=temp;
                traverse=temp;
            }
            else {
                traverse->next=temp;
                traverse=temp;
            }
            
        }
        
        
        return sumHead;
    }
};