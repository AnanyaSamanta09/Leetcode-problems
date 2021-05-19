class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int n,m;
     n=g.size(),m=s.size();
      int i,j,temp,p1=0,p2=0,c=0;
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());
     while(p1<n && p2<m)
     {
         if(s[p2]>=g[p1])
         {
             c++;
             p1++;
         }
         p2++;
     }
     return c;
    }
};