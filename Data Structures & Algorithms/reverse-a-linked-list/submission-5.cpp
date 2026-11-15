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
    ListNode* reverseList(ListNode* head) {
        ListNode* iter = head;
        ListNode* prev = nullptr;
    
        while(iter != nullptr){
            ListNode* temp = iter->next;
            iter->next = prev;
            prev = iter;
            iter = temp;
        }

        return prev;
    }
};
