#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int t, k, n; cin >> t >> k;
    int maxKilometers = 0;

    while (t--) {
        cin >> n;
        maxKilometers = max(maxKilometers, n);
    }

    cout << (maxKilometers+k) << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
