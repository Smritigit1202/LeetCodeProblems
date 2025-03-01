class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c=0;
        int a=0;

        for(int i=0; i< bills.size(); i++)
        {
            if( bills[i]==5)
            {
                c++;
            }
            else if(bills[i]==10)
            {
                if(c>0){
                c--;
                a++;
                }
    
               else
            {
                return false;
            }
            }
            else if(bills[i]==20)
            {
               if(a>0 && c>0)
               {
                a--; c--;
               }
               else if(c>=3)
               {
                c-=3;
               }
                else
            {
                return false;
            }
            }


           
        }

        return true;
    }
};
