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
    bool isPalindrome(ListNode* head) {
        std::stack<int> stacke;

        ListNode *curr = head;

        while(curr != nullptr){
            stacke.push(curr->val);
            curr = curr->next;
        }

        curr = head;

        while(!stacke.empty()){
            if(stacke.top() == curr->val){
                stacke.pop();
                curr = curr->next;
            } else {
                return false;
            }
        }

        return true;
    }
};