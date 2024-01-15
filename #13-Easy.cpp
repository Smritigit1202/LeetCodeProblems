class Solution {
public:
    
    
    int conversion(char a)
    {
         vector<pair<char,int>>p;
        p.push_back({'I',1});
        p.push_back({'V',5});
        p.push_back({'X',10});
        p.push_back({'L',50});
        p.push_back({'C',100});
        p.push_back({'D',500});
        p.push_back({'M',1000});
       for(int i=0;i<7;i++)
       {
if(a== p[i].first)
{
return p[i].second;}
       }
        
        return 0;
}
    int romanToInt(string s) {
        int p=0;
        for(int i=0;i<s.length();i++)
        {
            if(conversion(s[i])>= conversion(s[i+1])){
p= p+conversion(s[i]);
        }
           else{
              p=p+ (conversion(s[i+1])- conversion(s[i]));
               i++;
}} 
        return p;
        
    }
};
