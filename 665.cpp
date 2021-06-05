class Solution {
public:
    bool checkPossibility(vector<int>& a) {
    int n=a.size(),c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            if(c>0)
                return false;
            else
            {
                if(i>=2)
                {
                    if(a[i]>=a[i-2])
                        a[i-1]=a[i-2];
                    else
                        a[i]=a[i-1];
                }
                else
                    a[i-1]=a[i];
            }
            c++;
        }
    }
    return true;
    }
};