#include<bits/stdc++.h>

using namespace std;
using ll = long long ;
	
	ll B[9], E[9], S[9], I[9], G[9], O[9], M[9];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("bgm.in", "r", stdin);
	freopen("bgm.out", "w", stdout);
	char ch;
	ll t, n, m, ans, s,l, b, e, i, g, o, sum, x, y, r, p, j;

	cin >> n;

	
	ans =0;
	for (i = 1; i <= n; i ++) {
		cin >> ch >> y;
		if ( y < 0) y += 1e5;
		y %= 7;
		if ( ch == 'B') B[y] ++;
		if ( ch == 'E') E[y] ++;
		if ( ch == 'S') S[y] ++;
		if ( ch == 'I') I[y] ++;
		if ( ch == 'G') G[y] ++;
		if ( ch == 'O') O[y] ++;
		if ( ch == 'M') M[y] ++;
	}
	for ( b = 0; b < 7; b ++) {
		if ( B[b] == 0) continue;
		for ( e = 0; e < 7; e ++) {
			if ( E[e] == 0) continue;
			for (s = 0; s < 7; s ++) {
				if (S[s] == 0) continue;
				for (i = 0; i < 7; i ++) {
					if (I[i] == 0) continue;
					for ( g = 0; g < 7; g ++) {
						if ( G[g] == 0) continue;
						for (o = 0; o < 7; o ++) {
							if ( O[o] == 0) continue;
							for ( m = 0; m < 7; m ++) {
								if ( M[m] == 0) continue;
								r = b + e + s + s + i + e;
								p = g + o + e + s;
								l = m + o + o;
								r %= 7;
								p %= 7;
								l %= 7;
								if ( r * p * l == 0) {
									ans += ll (B[b] * E[e] * S[s] * I[i] * G[g] * M[m] * O[o]);
								}
							}
						}
					}
				}
			}
		}
	}
	cout << ans << endl;
}
