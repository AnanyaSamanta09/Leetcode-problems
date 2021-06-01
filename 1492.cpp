class Solution {
public:
    int kthFactor(int n, int k) {
    vector<int>temp;
    int i;
    if(n==1)
        return 1;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            temp.push_back(i);
    }
    if(temp.size()>=k)
        return temp[k-1];
    return -1;
    }
};