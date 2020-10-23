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
        int n, m = 0, ans = -1;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
            m = max(ara[i], m);
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] == m) {
                if(i > 0 && ara[i-1] < m) {
                    ans = (i+1);
                    break;
                }
                else if(i < n-1 && ara[i+1] < m) {
                    ans = (i+1);
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
