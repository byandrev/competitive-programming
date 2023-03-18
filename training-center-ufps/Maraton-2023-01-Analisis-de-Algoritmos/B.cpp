#include <bits/stdc++.h>
#include <queue>

using namespace std;


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        queue<int> queue;

        while (n--) {
            int state, badge;
            cin >> state >> badge;
            
            if (state == 1) {
                queue.push(badge);
            } else {
                if (queue.size() > 0) {
                    int removed = queue.front();
                    queue.pop();
                    cout << removed << "\n";
                }
            }
        }
    }

    return 0;
}
 
