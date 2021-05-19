class Solution {
public:
    string getHint(string s, string g) {
    int n=s.size(),i,a=0,b=0;
    map<int,int>m;
    for(i=0;i<n;i++)
    {
        if(s[i]==g[i])
        {
            a++;
        }
    }
    for(i=0;i<n;i++)
    {
      if(s[i]!=g[i])
      m[s[i]]++;
    }
    for(i=0;i<g.size();i++)
    {
        if(s[i]!=g[i] && m[g[i]]>0)
        {
            b++;
            m[g[i]]--;
        }
    }
    return to_string(a) + 'A' + to_string(b) + 'B';
    }
};