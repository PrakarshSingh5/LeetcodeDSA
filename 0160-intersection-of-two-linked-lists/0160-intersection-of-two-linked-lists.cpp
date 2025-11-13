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

        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int n1=0;
        int n2=0;
        while(temp1!=NULL){
            temp1=temp1->next;
            n1++;
        }   
        while(temp2!=NULL){
            temp2=temp2->next;
            n2++;
        }
        temp1=headA;
        temp2=headB;

        if(n1>n2){
            for(int i=0;i<(n1-n2);i++){
                 temp1=temp1->next;
            }
        }else {
             for(int i=0;i<(n2-n1);i++){
                 temp2=temp2->next;
            }
        }

        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
    }
};