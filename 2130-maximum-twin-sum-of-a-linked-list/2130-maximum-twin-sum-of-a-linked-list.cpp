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
    //To find the middle of the linkedList
    ListNode *midPtr(ListNode *head){
        ListNode *prevSlow = head , *currFast = head;
        while(currFast != nullptr && currFast -> next!= nullptr){
            currFast = currFast-> next->next;
            prevSlow = prevSlow->next;
        }
        return prevSlow;
        
    }
    ListNode *reverse(ListNode *head){
        ListNode *curr = head , *next = nullptr, *prev = nullptr;
         while(curr != nullptr ){
             next = curr -> next;
             curr -> next = prev;
             prev = curr;
             curr = next;
         }
        head = prev;
        return(head);
    }
    int pairSum(ListNode* head) {
        ListNode *left = head;
        ListNode *mid = midPtr(head);
        ListNode *right = reverse(mid);

        
        int currSum = 0;
        int maxSum = 0;
        
        while(right != nullptr){
            currSum = left-> val + right -> val;
            maxSum = max(currSum,maxSum);
            
            right = right -> next;
            left = left -> next;
            
        }
        
        return maxSum;
      
        
    }
};