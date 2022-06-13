/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *head1=headA; 
        ListNode *head2=headB;
        set<ListNode*> s;
        while(head1){
            s.insert(head1);
            head1=head1->next;
        }
        while(head2){
            if(s.find(head2)!=s.end())return head2;
            head2=head2->next;
        }
        return NULL;
    }
};