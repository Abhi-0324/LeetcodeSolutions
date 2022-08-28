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
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return head;
        ListNode* temp = new ListNode(); 
        ListNode* curr = head->next;
        ListNode* prev = head;
        temp = prev;

        int sum =0;
        while(curr && curr->next){
           
            if(curr->next->val == 0 ){
                if(curr->next->next == nullptr){
                    curr->next = nullptr;
                }
                sum += curr->val;
                curr->val = sum;
           
                prev->next = curr;
                sum =0;
                prev =prev->next;
                curr = curr->next;
                continue;
            }

            sum += curr->val;
            curr = curr->next;
            
            
        }
        return temp->next;
        
    }
};