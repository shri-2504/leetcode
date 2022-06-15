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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v;
        ListNode* head1=head;
        while(head1){
            v.push_back(head1->val);
            head1=head1->next;
        }
        vector<int> ans;
       for(int i=0;i<v.size();i++){
           if(i==0 || i%2==0)ans.push_back(v[i]);
       }
        
       for(int i=0;i<v.size();i++){
           if(i%2!=0)ans.push_back(v[i]);
       }
        ListNode* start=NULL;
        ListNode* traverse=NULL;
        for(int i=0;i<ans.size();i++){
            ListNode* temp=new ListNode(ans[i]);
            if(start==NULL){
                start=temp;
                traverse=temp;
            }
            else{
                traverse->next=temp;
                traverse=temp;
            }
        }
        return start;
    }
};