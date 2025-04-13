#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> ans;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2 || n == 3 || n == 4)
        {
            ans.push_back({-1});
            continue;
        }
        if (n == 5)
        {
            ans.push_back({1, 3, 5, 4, 2});
            continue;
        }
        if (n == 6)
        {
            ans.push_back({1, 3, 5, 4, 2, 6});
            continue;
        }
        vector<int> temp;
        for (int i = 1; i <= n; i += 2)
        {
            if (i == 7)
                continue;
            temp.push_back(i);
        }
        temp.push_back(7);
        for (int i = 2; i <= n; i += 2)
        {
            temp.push_back(i);
        }
        ans.push_back(temp);
    }
    for (vector<int> i : ans)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}