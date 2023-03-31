// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool isCorrectFirm(string original, string day) {
    if (original.size() != day.size()) {
        return false;
    }

    int differences = 0;

    for (int i = 0; i < original.size(); i++) {
        if (original[i] != day[i]) differences++;
    }

    return differences <= 1;
}


void solve(int n) {
    map<string, string> students;
    int assistance = 0, ans = 0;
    
    for (int i = 0; i < n; i++) {
        string name, firm; cin >> name >> firm;
        students[name] = firm;
    }

    cin >> assistance;

    while(assistance--) {
        string name, firm; cin >> name >> firm;
        string originalFirm = students[name];

        if (!isCorrectFirm(originalFirm, firm)) {
            ans++;
        }
    }

    cout << ans << "\n";
}


int main() {
    fastIO;

    int n;

    while (cin >> n && n != 0) {
        solve(n);
    }

    return 0;
}
