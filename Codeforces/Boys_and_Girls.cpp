#include <bits/stdc++.h>
 
#define PI acos(-1)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
char sn[2] = {' ', '\n'};
 
int main()
{
    FAST;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    int ma = max(m, n);
    int mi = min(m, n);
    if(ma == n) {
        for(int i = 1;; i++){
            if(n-1 >= 0 && i%2 != 0) { 
                printf("B");
                n--;
            }
            else if(m-1 >= 0 && i%2 == 0) {
                printf("G");
                m--;
            }
            else break;
        }
        //cout << "Done\n";
        while(n-1 >= 0) {
            printf("B");
            n--;
        }
        printf("\n");
    }
    else {
        for(int i = 1; ; i++){
            if(m-1 >= 0 && i%2 != 0) { 
                printf("G");
                m--;
            }
            else if(n-1 >= 0 && i%2 == 0) {
                printf("B");
                n--;
            }
            else break;
        }
        while(m-1 >= 0) {
            printf("G");
            m--;
        }
        printf("\n");
    }
    return 0;
}
