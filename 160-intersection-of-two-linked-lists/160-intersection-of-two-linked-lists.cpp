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
     ListNode *ptr=headA;
        ListNode *ptr1=headB;
        int count=0,count1=0;
        while(ptr!=NULL || ptr1!=NULL)
        {
            if(ptr!=NULL)
            {
                count++;
                ptr=ptr->next;
            }
            if(ptr1!=NULL)
            {
                ptr1=ptr1->next;
                count1++;
            }
        }
        ListNode *i;
        if(count>count1)
            i=headA;
        else
            i=headB;
        ListNode *j;
        if(i==headA)
            j=headB;
        else
            j=headA;
      int p=abs(count-count1);
        while(p--)
        {
            i=i->next;
        }
        while(i!=j && i!=NULL && j!=NULL)
        {
            i=i->next;
            j=j->next;
        }
            if(i==j && i!=NULL)
                return i;
        else
            return NULL;
        
    }
};