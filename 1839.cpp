class Solution {
public:
    int longestBeautifulSubstring(string a) {
    int c=1,l=1,maxii=0;
    for(int i=1;i<a.size();i++)
    {
                if(a[i-1]==a[i])
                {
                    c++;
                }
                else if(a[i]>a[i-1])
                {
                    c++;
                    l++;
                }
                else
                {
                    c=1;
                    l=1;
                }
                if(l==5)
                {
                    maxii=max(maxii,c);
                }
    }
    return maxii;
    }
};