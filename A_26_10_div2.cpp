#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int w,h,w_max=0,h_max=0,n;
        cin >> n;
        while(n--){
            cin >> w;
            cin >> h;
            w_max = max(w_max, w);
            h_max = max(h_max, h);
        }
        ans.push_back(2*(w_max+h_max));
    }
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}