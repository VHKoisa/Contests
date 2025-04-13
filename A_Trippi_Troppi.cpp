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
    cin >> t;
    vector<string> ans;
    while(t--){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        string modern = "";
        modern += s1[0];
        modern += s2[0];
        modern += s3[0];
        ans.push_back(modern);
    }
    for(auto i : ans){
        cout << i << endl;
    }
    return 0;
}