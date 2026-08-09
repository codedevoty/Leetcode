/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class
 Solution {
public:
    void deleteNode(ListNode* node) {
      
     ListNode *temp = node;
     ListNode *nextNode = node->next;
    
     temp->val = nextNode->val;
     nextNode->val = node->val;
     temp->next = nextNode->next; 
     return;
    }
};