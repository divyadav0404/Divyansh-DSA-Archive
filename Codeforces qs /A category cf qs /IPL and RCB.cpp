#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    int pnt,matches; cin>>pnt>>matches;
	    cout<<max(pnt - matches,0)<<endl;
	}
	return 0;
}
