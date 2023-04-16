#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, local, visitor; cin >> n;
    int ans = 0;

    while (n--) {
        cin >> local >> visitor;

        if (local > visitor) ans += 3;
        else if (local == visitor) ans++;

        cout << ans << "\n";
    }
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
