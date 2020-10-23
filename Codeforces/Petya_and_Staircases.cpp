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
    int n, m;
    cin >> n >> m;
    int ara[m];
    for(int i = 0; i < m; i++) {
        cin >> ara[i];
    }
    sort(ara, ara+m);
    if(ara[0] == 1 || ara[m-1] == n) {
        cout << "NO\n";
    }
    else {
        bool flag = true;
        int c = 1;
        for(int i = 1; i < m; i++) {
            if(ara[i]-ara[i-1] == 1) {
                c++;
                if(c >= 3) {
                    flag = false;
                    break;
                }
            }
            else c = 1;
        }
        //cout << flag << endl;
        (flag == true)? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
