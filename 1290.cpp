class Solution {
public:
    int getDecimalValue(ListNode* head) {
    stack<int>s;
    int i=0,sum=0,k=0;
    while(head!=NULL)
    {
        s.push(head->val);
        head=head->next;
    }
     while(!s.empty())
     {
         k=(s.top()*(pow(2,i)));
         s.pop();
         sum+=k;
         i++;
     }
     return sum;
    }
};