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
        int carry=0;
        ListNode* temp1=l1,*temp2=l2;
        ListNode *ans=new ListNode();
        ListNode *t=ans;
        while(temp1 && temp2){
            int sum=0;
            sum+=temp1->val;
            sum+=temp2->val;
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *temp=new ListNode(sum);
            t->next=temp;
            t=t->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            int sum=0;
            sum+=carry;
            sum+=temp1->val;
            carry=sum/10;
            sum%=10;
            ListNode *temp=new ListNode(sum);
            t->next=temp;
            t=t->next;
            temp1=temp1->next;
        }
        while(temp2){
            int sum=0;
            sum+=carry;
            sum+=temp2->val;
            carry=sum/10;
            sum%=10;
            ListNode *temp=new ListNode(sum);
            t->next=temp;
            t=t->next;
            temp2=temp2->next;
        }
        if(carry==1){
            ListNode *temp=new ListNode(carry);
            t->next=temp;

        }
        return ans->next;
    }
};