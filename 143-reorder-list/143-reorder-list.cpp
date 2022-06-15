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
    void reorderList(ListNode* head) {
        ListNode* starthead=head;
        vector<int> v;
        vector<int> ans;
        while(starthead){
            v.push_back(starthead->val);
            starthead=starthead->next;
        }
       // for(auto it:v)cout<<it<<" ";
        int n=v.size()/2;
        int siz=v.size()-1;
            for(int i=0;i<n;i++){
                ans.push_back(v[i]);
                ans.push_back(v[siz-i]);
               // cout<<v[siz-i]<<" ";
            }
       if(v.size()%2!=0)ans.push_back(v[n]);
       for(auto it:ans)cout<<it<<" ";
        // head=NULL;
        // ListNode* traverse=NULL;
        // for(int i=0;i<ans.size();i++){
        //     ListNode* temp=new ListNode(ans[i]);
        //     if(head==NULL){
        //         head=temp;
        //         traverse=temp;
        //     }
        //     else{
        //         traverse->next=temp;
        //         traverse=temp;
        //     }
        // }
        
//         ListNode *temp = new ListNode(ans[0]);
//         head = temp;
        
//         for(int i=1;i<ans.size();i++) {
//             ListNode *newNode = new ListNode(ans[i]);
//             temp->next = newNode;
//             temp=temp->next;
        ListNode* p=head;
        int i=0;
        while(p){
            p->val=ans[i++];
            p=p->next;
        }
      
        
        //ata
        
       
    }
};