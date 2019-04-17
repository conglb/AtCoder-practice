#include <bits/stdc++.h>

using namespace std;

vector<char> a;
char ch;
int n;

int main() {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> ch;
        a.push_back(ch);
    }
    sort(a.begin(),a.end());
    int dem = 0;
    long long ans = 1;
    for (int i=0; i<n; i++) {
        if (i == n-1 || a[i] != a[i+1]) {
            dem += 2;
            ans = (ans * dem) % int(1e9 + 7);
            dem = 0;
        } else dem++;
    }
    cout << ans - 1;
    return 0;
}