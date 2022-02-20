// https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> address;
        
        while(head){
            if(address.find(head)!=address.end()){
                return true;
            }
            address.insert(head);
            head=head->next;
        }
        return false;
                       
    }
};
