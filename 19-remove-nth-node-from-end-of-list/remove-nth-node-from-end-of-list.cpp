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
       
       if( head == NULL || head->next == NULL) return NULL;
       
         
         ListNode *currNode = head;
         ListNode *prevNode = NULL;
         ListNode *temp = head;
         
       
         int size = 0;
         while(temp != NULL){
            temp = temp->next;
            size++;
         }
         int cnt = size-n;
        
         if(cnt == 0) return head = head->next;
        
        else if(cnt == 1){
            head->next = head->next->next;
              return head;
             }   
        else { 
         while(cnt > 0){  

            prevNode = currNode;   
            currNode = currNode->next;
            cnt--;
         }
         prevNode->next = currNode->next;
        }
         
        
        

         return head;

    }
};