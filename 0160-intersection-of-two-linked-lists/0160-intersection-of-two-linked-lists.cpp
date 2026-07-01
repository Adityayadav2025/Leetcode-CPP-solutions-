/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // using unordered set


        unordered_set<ListNode*>visited;


           ListNode*currA=headA;
           ListNode*currB=headB;


           while(currA != nullptr ){
            visited.insert(currA);
            currA=currA->next;
           }


           
           while(currB != nullptr ){
            if(visited.count(currB)){
                return currB;

            }
            currB=currB->next;
           }

        return nullptr;
        
    }
};