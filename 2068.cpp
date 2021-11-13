class Solution {
public:
    bool checkAlmostEquivalent(string a, string b) {
        map<char,int>m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<b.size();i++)
        {
            if(b[i]>=1)
            {
                m[b[i]]--;
            }
        }
        for(auto x:m)
        {
            if(abs(x.second)>3)
            {
                return false;
            }            
        }
        return true;
    }
};