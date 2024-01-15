class Solution {
public:
    int reverse(int x) {
            long p=0;
        int t=x;
        int n=0;
        while(x!=0)
        {
            n= x%10;
p=(p*10)+n;
        x=x/10;}
        
        if(p> INT_MAX ||p<INT_MIN){return 0;}
        return p;

        
    
        
    }
};
