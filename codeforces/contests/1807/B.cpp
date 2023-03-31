// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int even = 0, odd = 0;

        while (n--) {
            int a; cin >> a;

            if (a%2 == 0) {
                even+=a;
            } else {
                odd+=a;
            }
        }

        if (even > odd) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
