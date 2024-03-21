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
/*
    Node* reverse(Node* &head ){
     if( head == NULL || head -> next == NULL){
         return head ;
     }
     
     Node* chotahead = reverse(head -> next );
     
     head -> next -> next = head;
     head -> next = NULL;
     
     return chotahead ;
     
     
    } */
 
 void reverse1(ListNode* &head , ListNode* curr, ListNode* prev){
     
     if(curr == NULL){
         
         head = prev ;
         return;
         
     }
     
    ListNode* forward = curr -> next ;
     
     reverse1(head , forward , curr);
     curr -> next = prev ;
     
 }


class Solution {
public:
    ListNode* reverseList(ListNode* head) {


         ListNode* prev = NULL;
         ListNode* curr = head;
         reverse1(head , curr , prev);
          
     return head;    
        
    }
};