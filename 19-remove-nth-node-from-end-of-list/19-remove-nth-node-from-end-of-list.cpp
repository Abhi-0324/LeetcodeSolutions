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
    int lengthF(int length , ListNode* head){
        while(head){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        int length = lengthF(0,head)-n;
        //   if(length == 0){
        //     return {};
        // }
        ListNode* curr = head;
        ListNode* prev = nullptr;
       
        while(curr&&length){
            length -=1;
            // if(length ==0){
            //     if(prev == nullptr){
            //         return head->next;
            //     }
            //     prev->next =curr->next;
            //     delete curr;
            //     break;
            // }
            prev= curr;
            curr = curr->next;
        }
        if(prev==nullptr)   return head->next;
        else
        {
            prev->next=curr->next;
        }
       return head; 
        
    }
};