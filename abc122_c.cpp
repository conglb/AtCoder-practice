#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+3;
int f[MAXN];

int main() {
	int n, q, l, r;
	string s;
	cin >> n >> q;
	cin >> s;
	for (int i=1; i<n; i++)
	{
		if (s[i] == 'C' && s[i-1] == 'A') {
			f[i] = f[i-1] + 1;
		} else f[i] = f[i-1];
	}
	for (int qq=0; qq<q; qq++) {
		cin >> l >> r;
		l--; r--;
		if (s[l] == 'C') l++;
		if (l == 0) cout << f[r] << endl; else cout << f[r] - f[l-1] << endl;
	}
	return 0;
}