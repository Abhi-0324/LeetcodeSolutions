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
        int count = 0;
        int flag =0;
        int k =0;
        ListNode*node = new ListNode();
        ListNode*temp = head;
        while(head != nullptr){
            count ++;
            head =head ->next;
            
        }
        cout << count;
        if(count%2==0){
           flag= count/2 +1;
        }else{
            flag = (count+1)/2 ;
        }
        cout<<flag;
        while(temp != nullptr){
               k++;
       cout<<k;
            if(k==flag){
                node->val =temp->val;
                node->next = temp->next;
               
            }
            temp = temp->next;
             
               
            
        }
        return node;
    }
};