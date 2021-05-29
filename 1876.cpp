class Solution {
public:
    int countGoodSubstrings(string a) {
    int i,c=0,n=a.size();
    for(i=1;i<n-1;i++)
    {
        if(a[i]!=a[i-1] && a[i]!=a[i+1] && a[i-1]!=a[i+1])
        {
            c++;
        }
    }
    return c;
    }
};