
#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, size; cin >> n;
    int minRoute = 9e5, maxRoute = 0;

    while (n--) {
        cin >> size;
        minRoute = min(minRoute, size);
        maxRoute = max(maxRoute, size);
    }

    cout << (maxRoute-minRoute) << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
