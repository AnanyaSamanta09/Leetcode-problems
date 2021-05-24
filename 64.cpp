class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
    int m=a.size(),n=a[0].size(),i,j;
    for(i=1;i<m;i++)
    {
        a[i][0]=a[i][0]+a[i-1][0];
    }
    for(i=1;i<n;i++)
    {
        a[0][i]=a[0][i]+a[0][i-1];
    }
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            a[i][j]+=min(a[i][j-1],a[i-1][j]);
        }
    }
    return a[m-1][n-1];
    }
};