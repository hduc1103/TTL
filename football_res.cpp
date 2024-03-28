#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long res[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        long long tu_so = 1, mau_so = 1;

        for (int j = 1; j <= x + y; j++)
        {
            tu_so *= j;
            if (j <= x)
            {
                mau_so *= j;
            }
            if (j <= y)
            {
                mau_so *= j;
            }
        }
        res[i] = tu_so / mau_so;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
