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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = head;
        int count =0;
        while(count<n){
            count++;
            curr = curr->next;
            
        }
        if(curr == nullptr){
            return head->next;
        }
        while(curr->next != nullptr){
            prev = prev->next;
            curr = curr->next;
        }
        prev->next = prev->next->next;
        
        return head;
        
        
    }
};