#include <iostream>
#include <algorithm>
using namespace std;
int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    int cnt = t;
    int res[t];
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int k = x;
        int n = x + y;

        int C[k + 1] = {0};
        C[0] = 1;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = min(i, k); j > 0; --j)
            {
                C[j] = (C[j] + C[j - 1]) % mod;
            }
        }

        res[t] = C[k];
    }
    for (int i = cnt - 1; i >= 0; i--)
    {
        cout << res[i] << endl;
    }
    return 0;
}
