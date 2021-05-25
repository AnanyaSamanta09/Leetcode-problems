class Solution {
public:
    int heightChecker(vector<int>& a) {
    vector<int>temp;
    int n=a.size(),i;
    for(i=0;i<n;i++)
    {
        temp.push_back(a[i]);
    }
    sort(temp.begin(),temp.end());
    int p1=0,p2=0,m=temp.size(),c=0;
    while(p1<n && p2<m)
    {
        if(a[p1]!=temp[p2])
        {
            c++;
        }
        p1++;
        p2++;
    }
    return c;
    }
};