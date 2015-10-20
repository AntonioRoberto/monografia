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

#define MAX 10000100
#define MOD 201004

int phi[MAX+5];

void calcPhi() {
	f(i, 0, MAX) phi[i] = i;

	for (int p = 2; p < MAX; p++) {
		if (phi[p] != p) continue;

		for (int n = p; n < MAX; n += p) 
			phi[n] = phi[n] / p * (p-1);
	}

	f(i, 2, MAX) if (phi[i] == i) phi[i] = i-1;
}

ll modexp(ll a, ll b) {
	if (b == 0) return 1LL;

	ll ans = modexp(a, b/2);
	ans = (ans*ans) % MOD;
	if (b%2 == 0) return ans;
	return (a * ans) % MOD;
}

int main() {
	calcPhi();

	ll m, n;
	while (cin >> n >> m && (n+m) != 0) {
		cout << (modexp(n,m-1)*phi[n])%MOD << endl;
	}
	return 0;
}
