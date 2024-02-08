// 2024.2.8

#include <iostream>

using namespace std;

int main()
{
    long long fac[31] = {0,};
    fac[0] = 1;
    int n, r;
    long long u = 1, d = 1;
    long long res;

    cin >> n >> r;

    n = n - 1;
    r = r - 1;

    if (r > (n / 2))
        r = n - r;

    for (int j = 0; j < r; j++)
    {
        u *= n;
        n--;
    }

    if (fac[r] != 0)
        d = fac[r];
    else
    {
        for (int j = 1; j <= r; j++)
        {
            d *= j;
            fac[j] = d;
        }
    }

    res = u / d;
    cout << res << endl;

    return 0;
}