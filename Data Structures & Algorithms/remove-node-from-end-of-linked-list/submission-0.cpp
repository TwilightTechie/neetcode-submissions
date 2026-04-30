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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> store;
        ListNode* temp = head;
        while(temp != nullptr){
            store.push_back(temp);
            temp = temp->next;
        }
        int index_to_remove = store.size() - n;
        if (index_to_remove == 0) {
            return head->next;
        }
        store[index_to_remove - 1]->next = store[index_to_remove]->next;
        return head;
    }
};
