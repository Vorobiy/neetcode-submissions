class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Start with an empty result list
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        int carry = 0;

        // Keep going while either list has digits or we have a carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            // Get the current digits (use 0 if a list has ended)
            int digit1 = 0;
            int digit2 = 0;

            if (l1 != nullptr) {
                digit1 = l1->val;
            }

            if (l2 != nullptr) {
                digit2 = l2->val;
            }

            // Add the digits and the carry
            int sum = digit1 + digit2 + carry;

            // Calculate the digit to store and the carry for next time
            int digit = sum % 10;
            carry = sum / 10;

            // Add the digit to the end of our result list
            tail->next = new ListNode(digit);
            tail = tail->next;

            // Move to the next digit in each input list
            if (l1 != nullptr) {
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }

        // The dummy node is just a helper; the actual result starts after it
        ListNode* answer = dummy->next;

        delete dummy;

        return answer;
    }
};