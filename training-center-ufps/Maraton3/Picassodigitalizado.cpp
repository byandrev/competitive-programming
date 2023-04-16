#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int a, b, colors = 0; cin >> a >> b;
    char c;

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cin >> c;

            if (c >= 65 && c <= 90) colors++;
        }
    }

    if (colors >= (a*b)/2) cout << "ES UN CUADRO DE PICASSO";
    else cout << "NO ES UN CUADRO DE PICASSO";
    cout << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
