// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
#include <deque>

using namespace std;


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        deque<int> numbersBase, numbersAns;

        for (int i = 0; i < n; i++) {
            numbersBase.push_back(i+1);
        }

        for (int i = 0; i < n; i++) {
            numbersAns.push_back(numbersBase[0]);
            numbersBase.pop_front();

            int firstNumber = numbersBase[0];
            numbersBase.pop_front();
            numbersBase.push_back(firstNumber);
        }

        for (int i = 0; i < n; i++) {
            cout << numbersAns[i] << "\n";
        }

        cout << "-"  << "\n";
    }

    return 0;
}
