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
        int decimalVal=0;
       int count =0;
        ListNode* tmp  = head;
   
        while(head != nullptr){
            count++;
            head = head->next;
        }
        count--;
            while(tmp != nullptr){
          
            decimalVal = decimalVal+ tmp->val*pow(2,count);
            tmp = tmp->next;
            count--;
            }
        
        return decimalVal;
    }
};