#include <iostream>
using namespace std;

int main()
{
    int m, d, k, c, killed = 0, cnt = 0;
    cin >> m >> d >> k >> c;
    int d1 = d;
    while (killed < m)
    {
        if (d1 - k <= 0)
        {
            if (killed == m - 1)
                break;

            d1 = d;
            cnt++;
        }
        d1 -= k;
        killed++;
    }
    cout << cnt * c;
    return 0;
}
