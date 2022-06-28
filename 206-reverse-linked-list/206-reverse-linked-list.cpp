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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        ListNode* start=NULL;
        ListNode*traverse=NULL;
        for(int i=0;i<v.size();i++){
            ListNode* node=new ListNode(v[i]);
            if(start==NULL && traverse==NULL){
                start=node;
                traverse=node;
            }
            else{
              traverse->next=node;
                traverse=node;
            }
        }
        return start;
    }
};