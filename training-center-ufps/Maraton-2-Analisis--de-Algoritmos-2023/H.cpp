// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool majorLexi(string a, string b) {
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}


void solve() {
    int n, maxRepetitions = 0; cin >> n;
    map<string, int> words;
    vector<string> wordsMaxRepetitions;
    string ans = "zzzzzzzzzzzzzzzzzzzzzz";

    while (n--) {
        string word; cin >> word;
        if (words.count(word) > 0) {
            words[word] += 1;
            maxRepetitions = max(maxRepetitions, words[word]);
        } else {
            words[word] = 1;
            maxRepetitions = max(maxRepetitions, words[word]);
        }
    }

    for (auto it = words.begin(); it != words.end(); ++it) {
        if (it->second == maxRepetitions) {
            wordsMaxRepetitions.push_back(it->first);
        }
    }

    for (int i = 0; i < wordsMaxRepetitions.size(); i++) {
        if (majorLexi(wordsMaxRepetitions[i], ans)) {
            ans = wordsMaxRepetitions[i];
        }
    }

    cout << ans << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

