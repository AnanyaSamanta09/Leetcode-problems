class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
    int i,n,k=0;
    n=a.size();
    sort(a.begin(),a.end());
    for(i=1;i<n;i++)
    {
        if(a[k]==a[i])
        {
            return true;
        }
        k++;
    }
    return false;
    }
};