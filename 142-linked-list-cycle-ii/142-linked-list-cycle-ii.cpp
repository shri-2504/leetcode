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
    ListNode *detectCycle(ListNode *head) {
         unordered_set<ListNode*> mp;
        while(head and !mp.count(head)){
            mp.insert(head);
            head = head->next;
        }
        return head;
    }
};