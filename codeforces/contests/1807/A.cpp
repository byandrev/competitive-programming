// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        if (a+b == c) cout << "+";
        else cout << "-";

        cout << "\n";
    }

    return 0;
}
