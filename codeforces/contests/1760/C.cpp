// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> s(n), k(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int number; cin >> number;
        k[i] = number;
        s[i] = number;
        mp[number] = i;
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        if (i < n - 1) mp[s[i]] = s[i] - s[n - 1];
        else mp[s[i]] = s[i] - s[n - 2];
    }

    for (int i = 0; i < n; i++) cout << mp[k[i]] << " ";
    cout << "\n";  
}

int main(){
    fastIO;
    int t; cin >> t;
    while (t--)solve();
    return 0;
}
