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
    
        ListNode *midptr(ListNode* head)
        {
        ListNode *currFast = head , *prevSlow = head;
        while(currFast -> next != nullptr && currFast -> next ->next != nullptr){
            currFast = currFast-> next-> next;
            prevSlow = prevSlow-> next;
        }
            return prevSlow -> next;
        }
    
        ListNode* reverse(ListNode* head){
            ListNode *curr = head, *prev = nullptr , *next = nullptr;
            while(curr!= nullptr){
                next = curr -> next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
            return head;
            
        }
     bool isPalindrome(ListNode* head) {
         ListNode *temp = head;
         ListNode *midNode = midptr(head);
        midNode = reverse(midNode);
         while(midNode != nullptr){
             if(temp->val != midNode->val){
                 return false;
             }
             midNode = midNode -> next;
             temp = temp -> next;
             }
         return true;
         }
        
    
};