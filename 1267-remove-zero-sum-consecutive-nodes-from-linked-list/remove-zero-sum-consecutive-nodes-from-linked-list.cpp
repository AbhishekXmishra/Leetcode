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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int presum = 0;
        unordered_map<int , ListNode*> mp ;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head; 
        mp[0] = dummy ;
        while(head != NULL){
            presum += head -> val ;

            if(mp.find(presum) != mp.end() ){
                ListNode* start = mp[presum];
                ListNode* temp = start ;
                int Psum = presum ;
                while(temp != head ){
                    temp = temp -> next;
                    Psum += temp -> val ;
                    if(temp != head){
                        mp.erase(Psum);
                    }
                }
            start -> next = head -> next ;

            } 
            else {

                mp[presum] = head ;
            }
            head = head -> next ;
        }
      return dummy -> next ;
    }
};