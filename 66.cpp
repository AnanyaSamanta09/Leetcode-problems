class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
    int i;
    for(i=a.size()-1;i>=0;i--)
    {
        if(a[i]==9)
        {
            a[i]=0;
        }
        else
        {
            a[i]=a[i]+1;
            return a;
        }
    }
    a[0]=1;
    a.push_back(0);
        return a;
    }
};