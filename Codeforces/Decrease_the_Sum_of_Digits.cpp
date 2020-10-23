#include <bits/stdc++.h>
 
#define PI acos(-1)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
char sn[2] = {' ', '\n'};
 
ll sum(ll n) 
{
    ll a = 0;
    while(n != 0) {
        ll d = n % 10;
        a += d;
        n /= 10;
    }
    return a;
}
 
int main()
{	
    FAST;
    int t;
    cin >> t;
    while(t--) {
        ll n, s, n_r;
        cin >> n >> s;
        n_r = n;
        //bool flag = true;
        if(sum(n) <= s) {
            cout << "0\n";
            continue;
        }
        ll dig, r, p = 1;
        if(sum(n) > s) {
            while(1) {
                dig = (n/p)%10;
                r = ((10-dig)%10) * p;
                n += r;
                //cout << "n = " << n << endl;
                if(sum(n) <= s) break;
                p *= 10;
            }
        }
        cout << n-n_r << endl;
    }
    return 0;
}
