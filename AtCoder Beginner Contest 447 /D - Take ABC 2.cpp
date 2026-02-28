#include <bits/stdc++.h>
using namespace std;

int main() {
	string s ;
	cin >> s;
	
	int a_cnt = 0 ;
	int ab_cnt = 0 ;
	int ans = 0 ;
	
	for ( char c : s)
	{
	    if ( c == 'A')
	    {
	        a_cnt ++;
	    }
	    else if ( c == 'B'){
	    if ( a_cnt > 0)
	    {
	    
	        a_cnt --;
	        ab_cnt ++;
	    }
	    }
	    else 
	    {
	        if ( ab_cnt > 0)
	        {
	            ab_cnt --;
	            ans ++;
	        }
	    }
	    
	}
	cout << ans << endl;
	return 0;

}
