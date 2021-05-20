class Solution {
public:
    int maxProfit(vector<int>& a) {
    int i,n=a.size();
    int s,profit=0,min=a[0],max=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        else
            profit=a[i]-min;
            if(profit>max)
            {
                max=profit;
            }
    }
        return max;
    }
};