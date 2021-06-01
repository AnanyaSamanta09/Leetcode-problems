class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
    sort(a.begin(),a.end());
    vector<vector<int>>temp;
    int i,n=a.size(),mini=INT_MAX;
    for(i=1;i<n;i++)
    {
        mini=min(mini,(abs(a[i]-a[i-1])));
            
    }
    for(i=1;i<n;i++)
    {
        if(abs(a[i]-a[i-1])<=mini)
            temp.push_back({a[i-1],a[i]});
    }
    return temp;
    }
};