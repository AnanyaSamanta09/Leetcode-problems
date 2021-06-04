class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string a) {
    vector<int>temp;
    int n=a.size(),i,c=1,curr=100;
    for(i=0;i<n;i++)
    {
        if(w[a[i]-'a']<=curr)
        {
            curr-=w[a[i]-'a'];
        }
        else
        {
            curr=100-w[a[i]-'a'];
            c++;
        }
    }
    temp.push_back(c);
    temp.push_back(100-curr);
    return temp;
    }
};