#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve() {
    int n, number; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        cin >> number;
        cout << (arr[i]+number) << (i < n-1 ? " " : "");
    }

    cout << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
