#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n; cin >> n;

    int pointsA = 0, pointsB = 0;

    while (n--) {
        string winner; cin >> winner;

        if (winner == "ALICE") pointsA++;
        else if (winner == "BOB") pointsB++;
    }

    if (pointsA == pointsB) cout << "EMPATE" << "\n";
    else if (pointsA > pointsB) cout << "ALICE" << "\n";
    else cout << "BOB" << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
