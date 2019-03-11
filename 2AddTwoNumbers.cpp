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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* p = new ListNode(0),*q;
        q=p;
        int x,y,sum,carry=0;
        while(l1||l2){
            x=(l1==NULL)?0:l1->val;
            y=(l2==NULL)?0:l2->val;
            sum = x+y+carry;
            carry=sum/10;
            p->next=new ListNode(sum%10);
            p=p->next;
            
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        if(carry>0){
            p->next=new ListNode(carry);
        }
        return q->next;
    }
       
};
