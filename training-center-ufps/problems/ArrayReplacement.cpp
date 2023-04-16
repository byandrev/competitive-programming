#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    for (int i = 0; i < 10; i++) {
        int n; cin >> n;
        if (n > 0) cout << "X[" << i << "] = " << n << "\n";
        else cout << "X[" << i << "] = " << 1 << "\n";
    }

    return 0;
}
