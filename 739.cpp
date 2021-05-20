class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
    int i,n;
    stack<int>s;
    n=a.size();
    vector<int> t(n,0);
    for(i=0;i<n;i++)
    {
        t[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(i);
        }
        else
        {
            while(!s.empty() && a[i]>a[s.top()])
            {
                t[s.top()]=i-(s.top());
                s.pop();
            }
            s.push(i);
        }
    }
    return t;
    }
};