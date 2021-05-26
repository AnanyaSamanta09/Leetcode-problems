class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
    if(a.size()<=2)
        return false;
    for(int i=1;i<a.size()-1;i++)
    {
        if(a[i]%2!=0 && a[i-1]%2!=0 && a[i+1]%2!=0)
        {
            return true;
        }
    }
    return false;
    }
};