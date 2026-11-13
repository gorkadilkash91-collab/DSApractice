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
    ListNode* findKthNode(ListNode* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }
     ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prevnode = nullptr;
        while (temp != nullptr) {
            ListNode* nextnode = temp->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = nextnode;
        }
        return prevnode;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevnode = nullptr;

        while (temp != nullptr) {
            ListNode* kthnode = findKthNode(temp, k);

            // fewer than k nodes left, so keep them as they are
            if (kthnode == nullptr) {
                if (prevnode != nullptr) prevnode->next = temp;
                break;
            }

            ListNode* nextnode = kthnode->next;
            kthnode->next = nullptr;      // cut the group off

            reverseList(temp);            // temp is now the tail of the reversed group

            if (temp == head) {
                head = kthnode;           // first group, so the new head is the kth node
            } else {
                prevnode->next = kthnode; // connect the previous group to this one
            }

            prevnode = temp;              // the tail of this group is the prev for the next one
            temp = nextnode;
        }
        return head;
    }
};