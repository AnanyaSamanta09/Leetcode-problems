class Solution {
public:
    int findNumbers(vector<int>& a) {
    int c=0,rem=0,d=0;
    for(int i=0;i<a.size();i++)
    {
        c=0;
        while(a[i]>0)
        {
            rem=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        if(c%2==0)
        {
           d++; 
        }
    }
    return d;
    }
};