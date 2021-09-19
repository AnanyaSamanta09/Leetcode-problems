class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
    sort(a.begin(), a.end());
    list<int>s;
    vector<int>v;
    for(int i=0;i<a.size();i++)
    {
        if(!s.empty() && a[i]==s.front())   
        {
            s.pop_front();
        }
        else
        {
            v.push_back(a[i]);
             s.push_back(a[i]*2);
        }
    }
    if(s.size()!=0)
    {
        return {};
    }
    return v;
    }
};
