#include<iostream>
#include<stack>
#include<queue>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include<map>
#include<numeric>
#include<sstream>
#include<cmath>
using namespace std;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define f(i,x,y) for(int i = x; i<y; i++ )
#define FORV(it,A) for(vector<int>::iterator it = A.begin(); it!= A.end(); it++)
#define FORS(it,A) for(set<int>::iterator it = A.begin(); it!= A.end(); it++)
#define quad(x) (x) * (x)
#define mp make_pair
#define clr(x, y) memset(x, y, sizeof x)
#define fst first
#define snd second



typedef pair<int,int> pii;
typedef long long ll;
typedef long double ld;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int aux;

inline bool check(int &x) {	
	while (x > 0) {
		aux = x%10;
		if (x == 4 || x == 7) return true;

		x /= 10;
	}
	return false;
}

int main() {
	int t; cin >> t;
	vector<int>v;
	while (t--) {
		int n; cin >> n;
		v.clear();

		for (int i = 1; i*i <= n; i++) {
			if (i*i == n) v.pb(i);
			else if (n%i == 0) {
				v.pb(i);
				v.pb(n/i);
			}
		}

		int cte = 0;
		f(i, 0, v.size())
			if (check(v[i])) cte++;

		cout << cte << endl;
	}

	return 0;
}
