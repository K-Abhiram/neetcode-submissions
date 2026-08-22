/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> mapp;
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        if(mapp.count(head)) return mapp[head];

        Node* copy = new Node(head->val);
        mapp[head] = copy;
        copy->next = copyRandomList(head->next);
        copy->random = mapp[head->random];

        return copy;
    }
};
