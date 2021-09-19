class Solution {
public:
    int countKDifference(vector<int>& a, int k) {
     int i,j,c=0;
     for(i=0;i<a.size();i++)
     {
         for(j=i+1;j<a.size();j++)
         {
             if(abs(a[i]-a[j])==k)
             {
                 c++;
             }
         }
     }
    return c;
    }
};