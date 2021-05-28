class Solution {
public:
    int maxSatisfaction(vector<int>& a) {
    sort(a.begin(),a.end());
    int i,n=a.size(),maxii=0,sum=0,k=0;
    for(i=n-1;i>=0;i--)
    {
        sum+=k+a[i];
        k+=a[i];
        maxii=max(maxii,sum);
    }
    return maxii;
    }
};