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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //1. create a new list
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* newListHead = nullptr;
        ListNode* newListTail = nullptr;

        //2. iterate until both the curr1 and curr2 point to nullptr
        while(curr1 && curr2){
            if(curr1->val <= curr2->val){
                ListNode* node = new ListNode(curr1->val);
                if(newListHead == nullptr){
                    newListHead = node;
                    newListTail = node;
                } else {
                    newListTail->next = node;
                    newListTail = node;
                }
                curr1 = curr1->next;
            } else {
                ListNode* node = new ListNode(curr2->val);
                if(newListHead == nullptr){
                    newListHead = node;
                    newListTail = node;
                } else {
                    newListTail->next = node;
                    newListTail = node;
                }
                curr2 = curr2->next;
            }
        }

        while (curr1) {
            ListNode* node = new ListNode(curr1->val);

            if(newListHead == nullptr){
                newListHead = node;
                newListTail = node;
            } else {
                newListTail->next = node;
                newListTail = node;
            }

            curr1 = curr1->next;
        }

        while (curr2) {
            ListNode* node = new ListNode(curr2->val);

            if(newListHead == nullptr){
                newListHead = node;
                newListTail = node;
            } else {
                newListTail->next = node;
                newListTail = node;
            }

            curr2 = curr2->next;
        }

        //3. return head of new list
        return newListHead;
    }
};
