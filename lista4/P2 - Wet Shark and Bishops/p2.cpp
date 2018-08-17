#include <bits/stdc++.h>
using namespace std;
#define rep(i, a) for (int i = 0; i < (a); i++)
#define rep2(i, a, b) for (int i = (a); i < (b); i++)
#define repr(i, a) for (int i = (a) - 1; i >= 0; i--)
#define repr2(i, a, b) for (int i = (b) - 1; i >= (a); i--)
template<class T1, class T2> bool chmin(T1 &a, T2 b) { return b < a && (a = b, true); }
template<class T1, class T2> bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }
typedef long long ll;

int main() {
	int t;
	cin >> t;
	map<ll, ll> m1, m2;
	rep(i, t) {
		int k, j;
		scanf("%d %d", &k, &j);
		m1[k + j]++;
		m2[k - j]++;
	}

	ll ans = 0;
	for (auto kv : m1) ans += kv.second * (kv.second - 1) / 2;
	for (auto kv : m2) ans += kv.second * (kv.second - 1) / 2;
	cout << ans << endl;
	return 0;
}
