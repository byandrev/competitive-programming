#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

 
void solve() {
    int size; cin >> size;
    bool ans = false;

    vector<string> rows;
    string columns[size];

    for (int i = 0; i < size; i++) {
        string line; cin >> line;
        rows.push_back(line);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            columns[i] += rows[j][i];
        }
    }
    
    int equalsY = 0;
    int equalsX = 0;

    for (int i = 0, f = size-1; i!=f && i < size/2; i++, f--) {
        if (rows[i] == rows[f]) equalsY++;
    }

    for (int i = 0, f = size-1; i!=f && i < size/2; i++, f--) {
        if (columns[i] == columns[f]) equalsX++;
    }

    if (equalsX == size/2 && equalsY == size/2) {
        ans = true;
    }

    cout << (ans ? "YES" : "NO") << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
