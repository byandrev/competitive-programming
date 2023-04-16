#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    int n; cin >> n;

    while (n--) {
        int a, b; cin >> a >> b;

        if (a > b) {
            cout << "perdimos";
        } else if (a < b) {
            cout << "ganamos";
        } else {
            cout << "casi ganamos";
        }

        cout << "\n";
    }

    return 0;
}
