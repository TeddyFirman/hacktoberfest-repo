#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
 
char sn[2] = {' ', '\n'};
int c[105];
 
#define PI acos(-1)
 
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, i, ans = 0, last_index = -1;
        char k;
        bool a = 1;
        cin >> n;
        for(i = 0; i < n; i++) {
        	cin >> k;
        	if(k == '1') {
        		if(last_index == -1) {
        			last_index = i;
        			a = 0;
        		}
        		ans += (i-last_index-a);
        		a = 1;
        		last_index = i;
        	}
        }
        cout << ans << "\n";
    }
    return 0;
}
