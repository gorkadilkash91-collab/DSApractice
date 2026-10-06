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
   /*      int count =0;           
    ListNode*temp = head;
    while(temp){
         count++;
        temp = temp->next;
    }
    int mid = count/2;
     ListNode*temp = head;
    for(int i=0; i<mid; i++ ){
        temp = temp-> next;
    }
    return count;
  */

        // Step 1: Dono pointers ko head par rrakha 
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Step 2: Jab tak fast aakhri node par ya list ke bahar na chala jaye
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          // Slow ko 1 step aage badhao
            fast = fast->next->next;    // Fast ko 2 steps aage badhao
        }
        
        // Step 3: Jab loop khatam hoga, slow middle node par hi hoga
        return slow;
    }
};
        
    
