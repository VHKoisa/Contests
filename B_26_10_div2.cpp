#include<bits/stdc++.h>
using namespace std;
int longestNonIncreasingSubsequence(int ind, int prev, vector<int>& a){
    if(ind == a.size()) return 0;
    int notTaken = longestNonIncreasingSubsequence(ind+1, prev, a), taken = INT_MIN;
    if(prev == -1 || a[ind] <= a[prev]){
        taken = 1 + longestNonIncreasingSubsequence(ind+1, ind, a);
    }
    return max(taken, notTaken);
}
int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n, -1);
        int i = 0;
        while(n--){
            cin >> a[i];
            i++;
        }
        int len = longestNonIncreasingSubsequence(0, -1, a);
        ans.push_back(a.size() - len);
    }
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}