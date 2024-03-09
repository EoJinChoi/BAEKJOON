// 2024.3.9

#include <iostream>

using namespace std;

int main()
{
    int n, num;
    int cnt[41][2];
    int now = 2;
    cin >> n;

    cnt[0][0] = 1;
    cnt[0][1] = 0;
    cnt[1][0] = 0;
    cnt[1][1] = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num == 0)
        {
            cout << "1 0\n";
            continue;
        }
        else if (num == 1)
        {
            cout << "0 1\n";
            continue;
        }

        for (int j = now; j <= num; j++)
        {
            cnt[j][0] = cnt[j - 1][0] + cnt[j - 2][0];
            cnt[j][1] = cnt[j - 1][1] + cnt[j - 2][1];
        }

        if (num > now)
            now = num + 1;

        cout << cnt[num][0] << " " << cnt[num][1] << endl;
    }

    return 0;
}