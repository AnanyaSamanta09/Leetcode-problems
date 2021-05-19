class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
    int n=a.size(),i=1;
    stack<int>s;
    s.push(a[0]);
    while(i<n)
    {
            if(!s.empty() && a[i]<0 && s.top()>0)
            {
                if(abs(a[i])==s.top())
                {
                    s.pop();
                    i++;
                }
                else if(s.top()>abs(a[i]))
                {
                    i++;
                }
                else
                {
                    s.pop();
                }
            }
            else
            {
                s.push(a[i]);
                i++;
            }
    }
    vector<int>temp;
    while(!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }
    reverse(temp.begin(),temp.end());
    return temp;
    }
};