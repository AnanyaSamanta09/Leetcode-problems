class Solution {
public:
    int minPairSum(vector<int>& a) {
    sort(a.begin(),a.end());
    int n=a.size(),k=n-1,maxii=0;
    for(int i=0;i<n/2;i++)
        maxii=max(maxii,(a[i]+a[k--]));
    return maxii;
    }
};