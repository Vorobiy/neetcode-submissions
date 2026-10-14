
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int i = 0;
        int length = 0;
        ListNode* curr = head;

        // Count the nodes
        while (curr != nullptr) {
            length++;
            curr = curr->next;
        }

        // Reset pointer
        curr = head;

        // Move to the middle
        while (i < length / 2) {
            curr = curr->next;
            i++;
        }

        return curr;
    }
};
