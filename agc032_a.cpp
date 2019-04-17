#include <bits/stdc++.h>

using namespace std;
int n, b[1003];

int main() {
	cin >> n;
	for (int i=1; i<=n;i++) cin >> b[i];
	bool check = 1;
	for (int i=1; i<=n;i++) {
		if (b[i] > i) {
			check = 0;
			break;
		}
	}
	if (!check || b[1] != 1) {
		cout << -1 << endl;
		return 0;
	}
	cout << 1 << endl;
	vector<pair<int, int> > a;
	for (int i=2;i<=n;i++) {
		a.push_back(make_pair(-(i - b[i]), b[i]));
	}
	sort(a.begin(), a.end());
	for (auto p: a) {
		//cout << p.first << " " << p.second << endl;
		cout << p.second << endl;
	}
	return 0;
}