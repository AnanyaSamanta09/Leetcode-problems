class Solution {
public:
    int calPoints(vector<string>& a) {
    int i,sum=0,k,b;
    stack<int>s;
    for(i=0;i<a.size();i++)
    {
        if(s.empty())
        {
            s.push(stoi(a[i]));
        }
        else
        {
            if(a[i]=="C")
            {
                s.pop();
            }
            else if(a[i]=="D")
            {
                s.push(s.top()*2);
            }
            else if(a[i]=="+")
            {
                k=s.top();
                s.pop();
                b=s.top();
                s.push(k);
                s.push(k+b);
            }
            else
            {
                s.push(stoi(a[i]));
            }
        }
    }
    while(!s.empty())
    {
        sum+=s.top();
        s.pop();
    }
    return sum;
    }
};