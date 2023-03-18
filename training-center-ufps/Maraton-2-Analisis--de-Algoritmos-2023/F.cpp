#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
#define sz(x) int((x).size())
#define ll long long

typedef long long T;

struct segtree {
    vector<T> st;
    int n; T neutro = 0;

    segtree(const vector<T> &v) {
        n = v.size();
        st.assign(n*4, 0);
        build(1, 0, n-1, v);
    }

    void build(int p, int L, int R, const vector<T> &v) {
        if (L == R) st[p] = v[L];
        else {
            int m = (L+R)/2, l = p*2, r = l+1;
            build(l, L, m, v);
            build(r, m+1, R, v);
            st[p] = st[l] + st[r];
        }
    }
    
    T query(int i, int j) { return query(1, 0, n-1, i, j); }
    void upd(int i, int j, T val) { upd(1, 0, n-1, i, j, val); }
    
    T query(int p, int L, int R, int i, int j) {
        if (i > R || j < L) return neutro;
        if (i <= L && j >= R) return st[p];
        int m = (L+R)/2, l = p*2, r = l+1;
        T lf = query(l, L, m, i, j);
        T rg = query(r, m+1, R, i, j);
        return lf + rg;
    }

    void upd(int p, int L, int R, int i, int j, T val) {
        if (i > R || j < L) return;
        if (i <= L && j >= R) st[p] = val;
        else {
            int m = (L+R)/2, l = p*2, r = l+1;
            upd(l, L, m, i, j, val);
            upd(r, m+1, R, i, j, val);
            st[p] = st[l] + st[r];
        }
    }
};

int main(){
	fastIO;
	T n, q, a, b, c;
	cin >> n;
	vector<T> even(n+1, 0);
    vector<T> odd(n+1, 0);
    int num;
	for(int i = 1; i <= n; i++){
		cin >> num;
        if(num&1){
            odd[i] = 1;
            even[i] = 0;
        }else{
            even[i] = 1;
            odd[i] = 0;
        }
	}
	segtree evensg(even);
    segtree oddsg(odd);
    cin >> q;
	for(int i = 0; i < q; i++){
		cin >> a >> b >> c;
		if(a == 1){
            cout << evensg.query(b,c) << endl;
        }else if(a == 2){
            cout << oddsg.query(b,c) << endl;
        }
		else{
            if(c&1){
                oddsg.upd(b,b,1);
                evensg.upd(b,b,0);
            }else{
                evensg.upd(b,b,1);
                oddsg.upd(b,b,0);
            }
        }
	}
	return 0;
}
