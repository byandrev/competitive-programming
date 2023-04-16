#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, k, value, ans = 0; cin >> n;
    map<string, int> products;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name >> value;
        products[name] = value;
    }

    cin >> k;

    while (k--) {
        cin >> name >> value;
        ans += products[name] * value;
    }

    cout << ans << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
