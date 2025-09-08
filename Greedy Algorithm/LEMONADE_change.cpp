class Solution {
public:
    bool lemonadeChange(vector<int>& bills) { //TC O(N) AND SC O(1)
        int five = 0 , ten = 0 ;
        for ( int i = 0 ; i < bills.size() ; i ++)
        {
            int bill = bills[i];
            if ( bill==5)
            {
                five++;
            }
            else if ( bill ==  10)
            if ( five > 0)
                {
                    five --;
                    ten++;

                }
                else
                {
                    return false ;
                }
            
                else {
                    if ( five > 0 && ten > 0)
                    {
                        five --;
                        ten --;

                    }
                    else if ( five >=3)
                    {
                        five = five - 3 ;
                    }
                    else{
                    return false ;
                    }

                }
            }
        
        return true ;
    }
};
