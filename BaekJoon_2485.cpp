// 2024.3.5

#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int num;
    int cur_gcd;
    int cnt = 0;

    cin >> num;

    int pos[num];
    for (int i = 0; i < num; i++)
    {
        cin >> pos[i];

        if (i == 0)
            continue;
        else if (i == 1)
        {
            cur_gcd = pos[1] - pos[0];
            continue;
        }

        cur_gcd = gcd(cur_gcd, pos[i] - pos[i - 1]);
    }

    int idx = 1;
    int i = pos[0] + cur_gcd;

    while (idx < num)
    {
        if (i == pos[idx])
            idx++;
        else
            cnt++;

        i += cur_gcd;
    }

    cout << cnt << endl;

    return 0;
}

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}