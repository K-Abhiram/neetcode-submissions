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
        vector<ListNode*> nodes;
        ListNode* cur = head;
        while(cur!=nullptr){
            nodes.push_back(cur);
            cur = cur->next;
        }
        int removeInd = nodes.size()-n;
        if(removeInd == 0){
            return head->next;
        }

        nodes[removeInd - 1]->next = nodes[removeInd]->next;
        return head;
    }
};
