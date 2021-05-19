bool isPalindrome(unsigned int n){
unsigned int rem=0,rev=0;
    unsigned k=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(k==rev)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}