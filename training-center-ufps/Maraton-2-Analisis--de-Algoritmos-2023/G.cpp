// Andres Parra Garzon - https://github.com/byandrev

#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool majorLexi(string a, string b) {
    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

bool comparatorsWords(string a, string b) {
    return majorLexi(a, b);
}

string normalize(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '.' || text[i] == ',' || text[i] == '?' || text[i] == '!') {
            text.erase(i--, 1);
        }
    }

    return text;
}


void solve() {
    int n; cin >> n;
    map<string, int> glossary;
    vector<string> words;

    n++;

    while (n--) {
        string word; cin >> word;
        string normalizedWord = normalize(word);

        if (glossary.count(normalizedWord) > 0 || normalizedWord == "FIN") {
            glossary[normalizedWord] += 1;
        } else {
            glossary[normalizedWord] = 1;
            words.push_back(normalizedWord);
        }
    }

    sort(words.begin(), words.end(), comparatorsWords);

    for (string w : words) {
        cout << w << "\n";
    }

    cout << "-" << "\n";
}


int main() {
    fastIO;

    int t; cin >> t;

    while (t--) solve();

    return 0;
}
