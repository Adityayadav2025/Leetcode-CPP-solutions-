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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        
        // making three pointer 
        ListNode*prev=head;
        ListNode*curr=head->next;
        int index=1;



        int first_idx=-1;
        int prev_idx=-1;
        int min_dist=INT_MAX;


        while(curr->next != nullptr){
            bool is_min=(curr->val< prev->val && curr->val< curr->next->val );
            bool is_max=(curr->val> prev->val && curr->val> curr->next->val );

            if(is_min || is_max){
                if(first_idx==-1){
                    first_idx=index;
                
                }else{
                    min_dist=min(min_dist, index-prev_idx);
                }
                prev_idx=index;

            }
            prev=curr;
            curr=curr->next;
            index++;
        }
        if(min_dist== INT_MAX){
            return {-1,-1};
        }


    int max_dist= prev_idx- first_idx;
    return {min_dist,max_dist};

        
    }
};