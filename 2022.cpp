class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
    int i,j,k=0;
    vector<vector<int>> b;
    if((m*n)!=a.size())
    {
        return b;
    }
    for(i=0;i<m;i++)
    {
        vector<int>temp;
        for(j=0;j<n;j++)
        {
            temp.push_back(a[k++]);
        }
        b.push_back(temp);
    }
    return b;
    }
};