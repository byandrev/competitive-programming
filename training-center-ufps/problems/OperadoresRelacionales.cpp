#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int a, b; cin >> a >> b;

    if (a > b) cout << a << " > " << b;
    else if (a < b) cout << a << " < " << b;
    else cout << a << " = " << b;

    cout << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
