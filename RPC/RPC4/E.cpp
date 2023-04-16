
#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main() {
    fastIO;

    int n, k; cin >> n >> k;
    long double arr[n];
    long double s = 0, p = 0, average = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += (arr[i]*arr[i]);
        average += arr[i];
    }

    average = average / n;
    p = sqrt(s) / 2;
    s = s / n;

    for (int i = 0; i < n; i++) {
        if (s != k && average != 0) {
            cout << fixed << setprecision(6) << (arr[i] / p);
        } else cout << arr[i];

        cout << (i < n-1 ? " " : "");
    }

    return 0;
}
