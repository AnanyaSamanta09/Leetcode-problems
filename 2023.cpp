class Solution {
public:
    int numOfPairs(vector<string>& a, string t) {
    int i,j,c=0;
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a.size();j++)
        {
            if(i!=j && a[i]+a[j]==t)
            {
                c++;
            }
        }
    }
    return c;
    }
};