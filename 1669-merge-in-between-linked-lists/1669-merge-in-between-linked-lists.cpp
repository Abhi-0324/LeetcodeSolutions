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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* linker1 = nullptr;
        ListNode* linker2 = nullptr;;
        ListNode* end = list2;
        int count = 0;
        
        while(temp){
            
            if(count == a-1){
              linker1 = temp;  
            }
            if(count == b+1){
                linker2 = temp;
            }
            temp = temp->next;
            count+=1;
            
        }
          
      linker1->next = list2;
        while(list2->next != nullptr){
            list2=list2->next;
        }

        
        list2->next = linker2;
        return list1;
    }
};