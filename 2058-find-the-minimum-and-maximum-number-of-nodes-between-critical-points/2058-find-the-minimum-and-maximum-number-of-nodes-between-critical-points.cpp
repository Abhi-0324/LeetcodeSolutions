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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    vector<int> ans(2,-1);
        ListNode* slow = head;
        head = head->next;
        ListNode* fast = head->next;
        int minDistance = INT_MAX;
        int prev = 0;
        int flag = 0;
        int node =2;
        int first = 0; 
        if(fast == nullptr){
            return ans;
        }
        while(fast){
            if(head->val<slow->val && head->val<fast->val){
                if(first ==0){
                    first = node;
                    prev = node;   
                }
                if(flag !=0){
                minDistance = min(abs(prev-node) ,minDistance );
                prev = node;
                ans[0] = minDistance;
                }  
                if(first != node)
                   ans[1] = abs(first-node);
                 flag+=1;
        
            }else if(head->val>slow->val && head->val>fast->val){
                if(first ==0){
                    first = node;
                     prev = node;         
                }
             
               if(flag !=0){
                minDistance = min(abs(prev-node) ,minDistance );
                prev = node;
                ans[0] = minDistance;
               }
                 flag+=1;
                if(first != node)
                ans[1] = abs(first-node);
            }
            slow = slow->next;
            fast = fast->next;
            head = head->next;
            node +=1;
        }
        return ans;
    }
};