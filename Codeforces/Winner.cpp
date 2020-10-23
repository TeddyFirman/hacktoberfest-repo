#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
 
char sn[2] = {' ', '\n'};
 
#define PI acos(-1)
 
int main()
{	
    int t;
    cin >> t;
    map<string, int> m;
    int p = -1;
    string ans;
    vector< pair<string, int> > v(t);
    for(int i = 0; i < t; i++) {
    	cin >> v[i].first >> v[i].second;
    	m[v[i].first] += v[i].second;
    }
    for(int i = 0; i < t; i++) {
    	//cout << v[i].first << " " << m[v[i].first] << endl;
    	p = max(p, m[v[i].first]);
    }
    //cout << p << endl;
    map<string, int> m2;
    for(int i = 0; i < t; i++) {
    	m2[v[i].first] += v[i].second;
    	if(m2[v[i].first] >= p && m[v[i].first] == p) {
    		ans = v[i].first;
    		break;
    	}
    }
    cout << ans << "\n";
    return 0;
}
