// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool is_different(string n) {
    return (n[0] != n[1] && n[0] != n[2] && n[0] != n[3]) &&
        (n[1] != n[2] && n[1] != n[3]) &&
        (n[2] != n[3]);
}

void solve() {
    int year; cin >> year;
    string yearStr = to_string(year);
    bool different = false;
    
    while (!different) {
        year++;
        yearStr = to_string(year);
        different = is_different(yearStr);
    }

    cout << yearStr << "\n";
}

int main(){
    fastIO;
    solve();
    return 0;
}
