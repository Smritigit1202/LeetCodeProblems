class Solution {
public:
    bool isPalindrome(int x) {
        long p=0;
        int t=x;
        int n=0;
        while(x>0)
        {
            n= x%10;
p=(p*10)+n;
        x=x/10;}
        //cout<<p;
        if(p==t)
        {
return true;}
        else  return false;
        
        
    }
};
