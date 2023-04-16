
#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int i; cin >> i;
    int n = ceil((-1 + sqrt(1 + 8*i)) / 2);
    int k = i - n * (n+1)/2 + n;
    cout << k << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
