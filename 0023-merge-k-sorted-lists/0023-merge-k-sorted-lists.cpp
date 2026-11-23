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
    ListNode* mergeTwo(ListNode* l1, ListNode* l2) {
        // flattening wali approach se hojaiga 
        // striver wala videos se 
        ListNode* dummyNode = new ListNode(-1);
        ListNode* res = dummyNode;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                res->next = l1;
                res = l1;
                l1 = l1->next;
            } else {
                res->next = l2;
                res = l2;
                l2 = l2->next;
            }
        }

        if (l1) res->next = l1;
        else    res->next = l2;

        return dummyNode->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = nullptr;
        for (ListNode* l : lists) {
            ans = mergeTwo(ans, l);
        }
        return ans;
    }
};