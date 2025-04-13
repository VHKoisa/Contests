#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> ans;
    while (t--)
    {
        int k;
        cin >> k;
        vector<int> a(k, -1);
        for(int i=0; i<k; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int low = 0, high = k-1;
        while(low < high){
            if((a[low]*a[high]) > k){
                low++;
            }
            else{
                break;
            }
        }
        low--;
        while(low < high){
            if((a[low]*a[high]) > k){
                high--;
            }
            else{
                break;
            }
        }
        high++;
        ans.push_back({low, high});
    }
    for (pair<int, int> i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}