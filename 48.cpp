class Solution {
public:
    void rotate(vector<vector<int>>& a) {
    int i,j,n=a.size(),temp,k=n-1;
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[k][j];
            a[k][j]=temp;
        }
        k--;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    }
};