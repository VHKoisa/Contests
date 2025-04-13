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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    const int B = 31; // since numbers < 2^30
    vector<int> ones(B, 0);
    for (int i = 0; i < n; i++){
        for (int b = 0; b < B; b++){
            if (a[i] & (1LL << b))
                ones[b]++;
        }
    }
    
    ll best = 0;
    for (int i = 0; i < n; i++){
        ll curr = 0;
        for (int b = 0; b < B; b++){
            if(a[i] & (1LL << b))
                curr += ((ll)(n - ones[b]) << b);
            else
                curr += ((ll)ones[b] << b);
        }
        best = max(best, curr);
    }
    cout << best << "\n";
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