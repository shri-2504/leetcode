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
        ListNode* sumhead=NULL;
        ListNode* traverse=NULL;
        int carry=0;
        while(l1||l2){
            int x=(l1!=NULL)?l1->val:0;
            int y=(l2!=NULL)?l2->val:0;
            int sum=x+y+carry;
            carry=sum/10;
            ListNode* temp3=new ListNode(sum%10);
            if(sumhead==NULL){
                sumhead=temp3;
                traverse=temp3;
            }
            else{
                traverse->next=temp3;
                traverse=temp3;
            }
            
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        if(carry>0){
             ListNode* temp3=new ListNode(carry);
              traverse->next=temp3;
              traverse=temp3;
        }
        return sumhead;
    }
};