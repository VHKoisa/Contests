#include <bits/stdc++.h>
using namespace std;

#define all(vec) vec.begin(), vec.end()
#define Mod  1'000'000'007
#define ll long long
#define ret return;
#define in(n) long long n; cin >> n;
#define in2(n,m) long long n,m; cin >> n>>m;
#define in3(n,m,k) long long n,m,k; cin >> n>>m>>k;
#define endl "\n"
#define debug(x) cout << "debug(" << #x << ") = " << x << "\n";
#define debug2(x, y) cout << "debug(" << #x << ", " << #y << ") = " << x << ", " << y << "\n";
#define debug3(x, y, z) cout << "debug(" << #x << ", " << #y << ", " << #z << ") = " << x << ", " << y << ", " << z << "\n";
#define nl cout << endl;
void solve(){
    string p, s;
    cin >> p >> s;
    int i = 0, j = 0;
    int n = p.length(), m = s.length();
    
    while (i < n && j < m) {
        char last = p[i];
        int cnt1 = 0;
        while (i < n && p[i] == last) {
            cnt1++;
            i++;
        }
        int cnt2 = 0;
        while (j < m && s[j] == last) {
            cnt2++;
            j++;
        }
        if (cnt2 < cnt1 || cnt2 > 2 * cnt1) {
            cout << "NO\n";
            return;
        }
    }
    if (i == n && j == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        
        solve();
    }
    return 0;
}