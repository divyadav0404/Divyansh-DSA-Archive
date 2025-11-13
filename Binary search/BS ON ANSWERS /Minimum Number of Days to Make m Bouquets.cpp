class Solution {
public: //tc of binary search one is O(Nlog(Max-Min))

bool canmake(vector<int>& bloomDay , int k , int m , int day)
{
    int f = 0;
    int b = 0 ;
    for ( int i = 0 ; i < bloomDay.size(); i++)
    {
        if(bloomDay[i]<= day)
        {
            f++;
        }
        else{
            f=0;
        }
        if( f==k)
        {
            b ++ ;
            f=0;
        }
    }
    return b>=m;
}

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * m * k ;
        if ( total > bloomDay.size()) return -1 ;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

      /*  for ( int day = minday ; day<= maxday ; day++)
        {
            if(canmake(bloomDay , k , m , day))
            {
                return day;
            }
        }
        return -1;
    }
}; */
int ans = - 1;
while ( low<= high)
{
    int mid = low + (high-low)/2 ;
    if(canmake(bloomDay , k, m , mid ))
    {
        ans = mid ;
        high = mid - 1 ;
    }
    else
    {
        low = mid + 1 ;
    }
}
return ans ;
    }
};
 //tough one , quite a tough one.. //both methods are here the brute force one as well as the binary search one..
