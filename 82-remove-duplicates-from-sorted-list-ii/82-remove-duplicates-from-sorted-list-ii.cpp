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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* head1=head;
        vector<int> v;
        map<int,int> mp;
        while(head1){
            mp[head1->val]++;
            head1=head1->next;
        }
        for(auto it:mp){
            if(it.second==1)v.push_back(it.first);
        }
        ListNode* sethead=NULL;
        ListNode* traverse=NULL;
        for(int i=0;i<v.size();i++){
            ListNode* temp=new ListNode(v[i]);
            if(sethead==NULL){
                sethead=temp;
                traverse=temp;
            }
            else{
                traverse->next=temp;
                traverse=temp;
            }
        }
        return sethead;
    }
};