// 2024.3.9

#include <iostream>

using namespace std;

int main()
{
    int n, value;
    int cnt = 0;

    cin >> n >> value;

    int coin[n];

    for (int i = 0; i < n; i++)
        cin >> coin[i];

    for (int i = n - 1; i >= 0; i--)
    {
        if (value == 0)
            break;

        if (coin[i] <= value)
        {
            cnt += value / coin[i];
            value %= coin[i];
        }
    }
    cout << cnt << endl;

    return 0;
}