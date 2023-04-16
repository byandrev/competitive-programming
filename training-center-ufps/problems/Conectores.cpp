#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    vector<int> conector(6, 0);
    bool ans = true;

    for (int i = 0; i < 6; i++) cin >> conector[i];

    for (int i = 0; i < 6; i++) {
        int n; cin >> n;

        if (conector[i] == n) ans = false;
    }

    if (!ans) cout << "INCOMPATIBLE" << "\n";
    else cout << "COMPATIBLE" << "\n";
}


int main() {
    fastIO;
    
    int n; cin >> n;
    while (n--) solve();
    return 0;
}
