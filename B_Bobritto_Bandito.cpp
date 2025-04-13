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
    
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;
    vector<pair<int, int>> ans;
    cin >> t;
    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        int sum = 0, l_dash = 0, r_dash = 0;
        if(abs(l) <= m){
            l_dash = l;
        }
        sum = m - abs(l);
        r_dash = sum;
        if(l_dash > l || r_dash > r){
            r_dash = min(m, r);
            l_dash = r_dash - m;
        }
        ans.push_back({l_dash, r_dash});
    }
    for(auto i : ans){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}