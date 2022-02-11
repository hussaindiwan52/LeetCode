/**
https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * headResult =new ListNode();
        ListNode * headResultRef =headResult;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            int sum=l1->val + l2->val + carry;
            carry=sum/10;
            sum%=10;
            ListNode * Sum =new ListNode(sum);
            headResultRef->next=Sum;
            headResultRef=headResultRef->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int sum=l1->val +carry;
            carry=sum/10;
            sum%=10;
            ListNode * Sum =new ListNode(sum);
            headResultRef->next=Sum;
            headResultRef=headResultRef->next;
            l1=l1->next;
        }
        while(l2!=nullptr){
            int sum=l2->val +carry;
            carry=sum/10;
            sum%=10;
            ListNode * Sum =new ListNode(sum);
            headResultRef->next=Sum;
            headResultRef=headResultRef->next;
            l2=l2->next;
        }
        if(carry==1){
            ListNode * Sum =new ListNode(carry);
             headResultRef->next=Sum;
        }
        return headResult->next;
    }
};
