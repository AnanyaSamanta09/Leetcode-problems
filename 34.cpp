class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
    int n=a.size(),i;
    vector<int> ans;
    vector<int> temp;
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            ans.push_back(i);
        }
    }
    if(ans.size()==0)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else if(ans.size()==1)
    {
        ans.push_back(ans[0]);
    }
    else if(ans.size()>2)
    {
       temp.push_back(ans[0]);
       temp.push_back(ans[ans.size()-1]);
        return temp;
    }
    return ans;
    }
};