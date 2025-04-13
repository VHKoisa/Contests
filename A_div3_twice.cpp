#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, -1);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int score = 0;
        for(auto i : mp){
            if(i.second % 2 == 0) score += i.second/2;
            else score += (i.second-1)/2;
        }
        ans.push_back(score);
    }
    for (int i : ans)
    {
        cout << i << endl;
    }
    return 0;
}