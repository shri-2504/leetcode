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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> v;
        ListNode* head1=head;
        int size=0;
        while(head1){
            v.push_back(head1->val);
            head1=head1->next;
        }
        int l=0,h=k-1;
        for(int i=0;i<v.size();i=i+k){
            l=i;
            h=i+k-1;
            while(l<=h && h<v.size()){
                swap(v[l++],v[h--]);
            }
        }
        ListNode* starthead=NULL;
        ListNode* traverse=NULL;
        for(int i=0;i<v.size();i++){
            ListNode* temp=new ListNode(v[i]);
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