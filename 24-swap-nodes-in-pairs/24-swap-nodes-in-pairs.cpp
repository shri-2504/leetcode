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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        
        ListNode* head1=head;
        while(head1){
            v.push_back(head1->val);
            head1=head1->next;
        }
        int n=v.size()/2;
        // if(v.size()==1){
        //  ListNode* temp=new ListNode(v[0]);
        //     return temp;
        // }
        int i=0;
        while(n--){
            swap(v[i],v[i+1]);
            i+=2;
        }
        for(auto i:v)cout<<i<<" ";
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