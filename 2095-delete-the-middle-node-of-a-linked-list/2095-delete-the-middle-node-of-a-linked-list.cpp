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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return NULL;
        ListNode *temp = head;
        int size = 0;
        
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        if(size == 1) return NULL;
        if(size == 2){
            head->next = head->next->next;
            return head;
        }
        int cnt ;
        if(size % 2 == 0){
            cnt = (size-1)/2;
        }
        else {
            cnt = (size-2)/2;
        }
        
        
         ListNode *currNode = head;
           ListNode *nextNode = currNode->next;
            
        while(cnt > 0){
          
           currNode = currNode->next;
            cnt--;
        }
        currNode->next = currNode->next->next;
          
          return head;
    }
};