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


int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b%a, a);
}

int main() {
	vector <int> v, q;
	int n;
	while (cin >> n && n) {
		v.clear();
		v.pb(n);
		while (cin >> n && n) v.pb(n);

		sort(v.begin(), v.end());
		int ans = v[1] - v[0];
		for (int i = 2; i < v.size(); i++)
			ans = gcd(ans, v[i] - v[i-1]);
		
		cout << ans << endl;
	}

	return 0;
}
