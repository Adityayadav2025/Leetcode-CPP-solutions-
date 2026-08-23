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
       
       // function to find the kth node from current node 
            ListNode *getkthNode(ListNode * curr ,int k ){
                while(curr&&k>0){
                    curr=curr->next;
                    k--;
                }
                return curr;
            }



    ListNode* reverseKGroup(ListNode* head, int k) {
        // creating a dummy node to handle edge case easily ;
        ListNode *dummy =new ListNode(0);
        dummy->next=head;

        // to keep track of the previous group tail;
        ListNode * groupPrev=dummy;

        while(true){
            // finding the kth node form the groupPrev
            ListNode * kth=getkthNode(groupPrev,k);
            if(!kth)break;

            // store the group next ;
            ListNode * groupNext=kth->next;


            // braek the chain to reverse the current k group clearly 
            ListNode* prev =groupNext;
            ListNode * curr=groupPrev ->next;


            // reversing the kth group 
            for(int i=0;i<k;i++){
                ListNode* temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;

            }
            // connecting previous group to the ll'
            ListNode* temp=groupPrev->next;
            groupPrev->next=kth;
            groupPrev=temp;           
        }
            


            //returning the new head
           return dummy->next;
        
    }
};