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
    bool hasCycle(ListNode *head) {
        ListNode *curr = head, *prev = head;

        
        while(curr != nullptr && curr ->next != nullptr){
            curr = curr->next->next;
            prev= prev-> next;
            
            if(curr==prev){
                return true;
            }
            
        }
        return false;
        
    }
};