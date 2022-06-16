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
    ListNode* middleNode(ListNode* head) {

        ListNode *curr = head, *prev = head;
        while(curr != nullptr && curr -> next != nullptr){
            curr = curr -> next -> next;
            prev = prev -> next;
        }
        
        return prev;
    }
};