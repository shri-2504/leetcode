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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* head1=head;
        vector<int> v;
        while(head1){
            v.push_back(head1->val);
            head1=head1->next;
        }
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            if(i!=v.size()-n)ans.push_back(v[i]);
        }
        for(auto it:ans)cout<<it<<" ";
        ListNode* starthead=NULL;
        ListNode* traverse=NULL;
        for(int i=0;i<ans.size();i++){
            ListNode* temp=new ListNode(ans[i]);
            if(starthead==NULL){
                starthead=temp;
                traverse=temp;
            }
            else{
                traverse->next=temp;
                traverse=temp;
            }
        }
        return starthead;
    }
};