#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int a, b; cin >> a >> b;
    int m[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = a-1; i >= 0; i--) {
        for (int j = b-1; j >= 0; j--) {
            cout << m[i][j] << (j==0 ? "" : " ");
        }

        cout << "\n";
    }
}


int main() {
    fastIO;

    int n; cin >> n;

    while (n--) solve();

    return 0;
}
