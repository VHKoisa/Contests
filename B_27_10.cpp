#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<vector<long long>> ans;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> num(n, 3);
        if (n == 1 || n == 3)
        {
            num.clear();
            num.push_back(-1);
            ans.push_back(num);
            continue;
        }
        num[n - 2] = 6;
        num[n - 1] = 6;
        if (n % 2 != 0)
        {
            num[n - 4] = 6;
        }
        ans.push_back(num);
    }
    for (vector<long long> i : ans)
    {
        for (long long j : i)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}