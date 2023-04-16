#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, s; cin >> n;
    stack<int> cds;

    while (n--) {
        cin >> s;

        if (s == 0) {
            int top = cds.top();
            cds.pop();
            cout << top << "\n";
        } else {
            cds.push(s);
        }
    }
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();
    return 0;
}
