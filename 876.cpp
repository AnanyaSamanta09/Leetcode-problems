class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode* temp=head;
    int c=0,i=0;
     while(temp!=NULL)
     {
         c++;
         temp=temp->next;
     }
     temp=head;  
     while(i<c/2 && temp!=NULL)
     {
         temp=temp->next;
         i++;
     }
    return temp;
    }
};