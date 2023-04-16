
#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    int n; cin >> n;
    long double k, ans = 1, sum_total = 0;

    for (int i = 0; i < n; i++) {
        cin >> k;
        sum_total += (k*k*k);
    }

    ans = cbrt(sum_total);

    cout << fixed << setprecision(6) << ans << "\n";

    return 0;
}
