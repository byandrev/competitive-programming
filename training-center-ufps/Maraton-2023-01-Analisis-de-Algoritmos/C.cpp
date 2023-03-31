// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        stack<int> stack;
        bool ans = true;

        while (n--) {
            int f; cin >> f;

            if (f == 1) {
                stack.push(f);
            } else {
                if (stack.empty()) {
                    ans = false;
                } else {
                    stack.pop();
                }
            }
        }


        if (ans) {
            if (stack.empty()) {
                cout << "CORRECTO" << endl;
            } else {
                cout << "INCORRECTO" << endl;
            }
        } else {
            cout << "INCORRECTO" << endl;
        }
    }

    return 0;
}
