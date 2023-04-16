#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, s; cin >> n;
    int first; cin >> first;

    for (int i = 1; i < n; i++) {
        cin >> s;
        cout << s << " ";
    }

    cout << first << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
