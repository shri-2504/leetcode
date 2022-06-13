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
    int getDecimalValue(ListNode* head) {
        int size=0;
        int res=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        cout<<size;
        temp=head;
        int sub=1;
        while(temp){
            int ans=pow(2,size-sub);
            res+=ans*temp->val;
            sub++;
            temp=temp->next;
        }
        return res;
    }
};