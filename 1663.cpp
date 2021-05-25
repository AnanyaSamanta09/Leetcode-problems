class Solution {
public:
    string getSmallestString(int n, int k) {
    string temp="";
    for(int i=0;i<n;i++)
        temp+="a";
    if(k==n)
        return temp;
    k-=n;
    int index=n-1;
    while(k>0)
    {
        int mini=min(25,k);
        temp[index]=temp[index]+mini;
        index--;
        k-=mini;
    }
    return temp;
    }
};