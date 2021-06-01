class Solution {
public:
    int maximumUniqueSubarray(vector<int>& a) {
     unordered_map<int,int>m;
     int n=a.size(),i,maxii=0;
     vector<int>sum(n+1);
     vector<int>num(n+1);
     sum[0]=0;
     num[0]=0;
     for(i=1;i<n+1;i++)
     {
         sum[i]+=sum[i-1]+a[i-1];
         num[i]=a[i-1];
     }
     int k=0;
     for(i=0;i<n+1;i++)
     {
         if(m[num[i]]!=0 && m[num[i]]>k)
         {
             k=m[num[i]];
         }
         m[num[i]]=i;
         maxii=max(maxii,sum[i]-sum[k]);
     }
     return maxii;
    }
};