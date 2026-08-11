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
      
          ListNode *slow = head;
    ListNode *fast = head;
     
      // if(head->next == NULL) return true;
    
    while(fast != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next;
        fast = fast->next;
       
    }
    
    
    ListNode *currNode = slow;
    ListNode *prevNode = NULL;
    
    while(currNode != NULL){
         ListNode *nextNode = currNode->next;
         currNode->next = prevNode;
        
         prevNode = currNode;
         currNode = nextNode;
    }
         
         ListNode *newNode = head;
         ListNode *midNode = prevNode;
     while(midNode != NULL){
         if(newNode->val != midNode->val) return false;
         midNode = midNode->next;
         newNode = newNode->next;
     }
    return true;
    }
};