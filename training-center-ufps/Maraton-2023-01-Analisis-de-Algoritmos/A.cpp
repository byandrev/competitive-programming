// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>

using namespace std;


string minToHours(int min) {
    return to_string(min/60) + ":" + to_string(min%60);
}


int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int diferentsHours = 0, temprano = 1e7, tarde = 0;
        map<int, int> hours;
        
        while (n--) {
            int f; cin >> f;

            temprano = min(f, temprano);
            tarde = max(f, tarde);

            if (hours.count(f) > 0) {
                hours[f] += 1;
            } else {
                hours[f] = 1;
                diferentsHours++;
            }
        }

        cout << "Horas diferentes: " << diferentsHours << endl;
        cout << "Temprano: " << minToHours(temprano) << endl;
        cout << "Tarde: " << minToHours(tarde) << endl;
    }

    return 0;
}
