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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;
        if (left == NULL) return right;
        if (right == NULL ) return left;

        while(left && right) {
            if(left->val <= right->val) {
                mptr->next = left;
                mptr = left;
                left = left->next;
            }
            else {
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        while(left) {
            mptr->next = left;
            mptr = left;
            left = left->next;
        }
        while(right) {
            mptr->next = right;
            mptr = right;
            right = right->next;
        }
        return ans->next;
        
    }
};
