class Solution {
public:
    int maxProduct(vector<int>& a) {
    int n=a.size();
    sort(a.begin(),a.end());
    return (a[n-1]-1)*(a[n-2]-1);
    }
};