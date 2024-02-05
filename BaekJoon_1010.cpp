// 2024.2.5

#include <iostream>

using namespace std;

int main()
{
    int test_num;
    long long fac[30] = {0,};
    fac[0] = 1;

    cin >> test_num;

    for (int i = 0; i < test_num; i++)
    {
        int l, r;
        long long u = 1, d = 1;
        long long res;

        cin >> l >> r;

        if (l > (r / 2))
            l = r - l;

        for (int j = 0; j < l; j++)
        {
            u *= r;
            r--;
        }

        if (fac[l] != 0)
            d = fac[l];
        else
        {
            for (int j = 1; j <= l; j++)
            {
                d *= j;
                fac[j] = d;
            }
        }

        res = u / d;

        cout << res << endl;
    }

    return 0;
}