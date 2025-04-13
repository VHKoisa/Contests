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

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t = 1;
    vector<vector<int>> ans;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        ll sum = (2*n*(2*n+1))/2;
        vector<int> p(2*n);
        for(int j = 0; j < n; j++) {
            p[j + 1] = a[0][j];
        }
        for(int i = 1; i < n; i++) {
            p[i + n] = a[n-1][i];
        }
        for(int i=1; i<2*n; i++){
            sum -= p[i];
        }
        p[0] = sum;
        ans.push_back(p);
    }
    for(auto i: ans){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}