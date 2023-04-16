
#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    float n; cin >> n;
    double k, ans = 1, sum_total = 0;

    for (int i = 0; i < n; i++) {
        cin >> k;
        sum_total += pow(k, 3);
    }

    double a=1, p=a/n;
    ans = pow(sum_total, p);

    cout << setprecision(10) << ans << "\n";

    return 0;
}
