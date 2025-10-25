class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,t=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5){
                a++;}
            else if(bills[i]==10)
            {
                t++;
                if(a>0)
                {
                    a--;
                    continue;
                }
                return false;
            }
            else
            {
                if(a>0&&t>0)
                {
                    a--,t--;
                    continue;
                }
                else if(a>=3)
                {
                    a-=3;
                    continue;
                }
                return false;
            }
        }
        return true;
    }
};
