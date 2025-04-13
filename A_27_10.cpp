#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<long long> ans;
    while(t--){
        long long n,m,r,c;
        cin >> n >> m >> r >> c;
        long long pos = (r-1)*m + c;
        pos = n*m - pos;
        for(long long i = 0; i<(n - r); i++){
            pos = pos + m-1;
        }
        ans.push_back(pos);
    }
    for(long long i : ans){
        cout << i << endl;
    }
    return 0;
}