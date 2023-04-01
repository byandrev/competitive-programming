#include <bits/stdc++.h>
      
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef long long T;
 
struct segtree {
    vector<T> st;
    int n; T neutro = 1e9;
 
    segtree(const vector<T> &v) {
        n = v.size();
        st.assign(n*4, 0);
        build(1, 0, n-1, v);
    }
 
    void build(int p, int L, int R, const vector<T> &v) {
        if (L == R) {
            st[p] = v[L];
        } else {
            int m = (L+R)/2, l = p*2, r = l+1;
            build(l, L, m, v);
            build(r, m+1, R, v);
            st[p] = min(st[l], st[r]);
        }
    }
 
    T query(int i, int j, map<T,T> &mp) { return query(1, 0, n-1, i, j, mp); }
    void upd(int i, int j, T val, map<T,T> &mp) { upd(1, 0, n-1, i, j, val, mp); }
    
    T query(int p, int L, int R, int i, int j, map<T,T> &mp) {
        if (i > R || j < L) return neutro;
        if (i <= L && j >= R) {
            mp[st[p]] += 1;
            return st[p];
        }
        int m = (L+R)/2, l = p*2, r = l+1;
        T lf = query(l, L, m, i, j, mp);
        T rg = query(r, m+1, R, i, j, mp);
        T less = min(lf, rg);
        mp[less] += 1;
        return less;
    }
 
    void upd(int p, int L, int R, int i, int j, T val, map<T,T> &mp) {
        if (i > R || j < L) return;
        if (i <= L && j >= R) {
            st[p] = val;
            mp[st[p]] += 1;
        }
        else {
            int m = (L+R)/2, l = p*2, r = l+1;
            upd(l, L, m, i, j, val, mp);
            upd(r, m+1, R, i, j, val, mp);
            T less = min(st[l], st[r]);
            mp[less] += 1;
            st[p] = less;
        }
    }
};

int main() {
    fastIO;

    int n, q, k; cin >> n >> q;
    T x, y;
    vector<T> s(n);
    map<T, T> mp;

    for (int i = 0; i < n; i++) {
        T number; cin >> number;
        mp[number] = 0;
        s[i] = number;
    }

    segtree sg(s);

    while (q--) {
        cin >> k >>  x >> y;

        if (k == 1) {
            sg.upd(x, x, y, mp);
        } else {
            T less = sg.query(x, y-1, mp);
            cout << less << " " << mp[less] << "\n";
        }
    }

    return 0;
}
