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

int main() {
	int m, n, t;
	int p[100000];
	while (cin >> m >> n >> t) {
		for (int i = 0; i < t+5; i++) p[i] = -1;
		p[0] = 0;

		for (int i = 1; i <= t; i++) {
			if (i >= n && p[i-n] != -1) p[i] = 1+p[i-n];
			if (i >= m && p[i-m] != -1) p[i] = max(p[i], 1+p[i-m]);
		}

		if (p[t] != -1) cout << p[t] << endl;
		else {
			for (int i = t; i >= 0; i--) {
				if (p[i] != -1) {
					cout << p[i] << ' ' << t-i << endl;
					break;
				}
			}

		}

	}
	return 0;
}
