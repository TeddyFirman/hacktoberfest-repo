#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	int size = (int)s.size();
    	int a = (s[0] - '0') - 1;
    	int ans = (10*a)+((size*(size+1))/2);
    	cout << ans << "\n";
    }
    return 0;
}
