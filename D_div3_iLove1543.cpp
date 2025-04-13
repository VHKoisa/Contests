#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> matrix(n, "");
        for (int i = 0; i < n; i++)
        {
            cin >> matrix[i];
        }
        int layers = min(n, m) / 2;
        int curr = 0;
        int cnt = 0;
        while (curr < layers)
        {
            string temp = matrix[curr];
            for (int row = curr; row <= n - curr - 1; row++)
            {
                temp += matrix[row][m - curr - 1];
            }
            for (int col = m - curr - 1; col >= curr; col--)
            {
                temp += matrix[n - curr - 1][col];
            }
            for (int row = n - curr - 1; row >= curr; row--)
            {
                temp += matrix[row][curr];
            }
            for (int i = 0; i <=  ; i++)
            {
                /* For current index i, check for
                   pattern match */
                int j;
                for (j = 0; j < M; j++)
                    if (txt[i + j] != pat[j])
                        break;

                // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
                if (j == M)
                {
                    res++;
                }
            }
            curr++;
        }
    }
    for (int i : ans)
    {
        cout << i << endl;
    }
    return 0;
}