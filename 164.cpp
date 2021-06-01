class Solution {
public:
    int maximumGap(vector<int>& a) {
    sort(a.begin(),a.end());
    int n=a.size(),maxii=INT_MIN;
    if(n<2)
        return 0;
    for(int i=1;i<n;i++)
    {
        maxii=max(maxii,abs(a[i-1]-a[i]));
    }
    return maxii;
    }
};