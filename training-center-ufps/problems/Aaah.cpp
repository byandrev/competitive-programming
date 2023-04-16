#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    string a, b; cin >> a >> b;

    if (a.length() < b.length()) cout << "no";
    else cout << "go";

    cout << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
