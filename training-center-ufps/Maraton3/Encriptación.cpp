#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


void solve(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = s[i]+3;
        }
    }

    reverse(s.begin(), s.end());

    int start = s.length()/2;
    for (int i = start; i < s.length(); i++) {
        s[i] = s[i]-1;
    }
    if (s.length() > 0) cout << s << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;
    string text;
    while(getline(cin, text)) {
        solve(text);
    }

    return 0;
}
