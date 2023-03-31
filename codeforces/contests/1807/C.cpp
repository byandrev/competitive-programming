// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n; cin >> n;
    string w; cin >> w;

    int mp[26];
    for (int i = 0; i < 26; i++) mp[i] = -1;

    for (int i = 0; i < n; i++) {
        int current = (w[i] - 'a');

        if (mp[current] == -1) {
			mp[current] = (i % 2);
		} else {
			if (mp[current] != (i % 2)) {
                cout << "NO" << "\n";
                return;
            }
		}
    }

    cout << "YES" << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
