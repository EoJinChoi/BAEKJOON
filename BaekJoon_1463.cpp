// 2024.3.10

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min_cnt[n + 1];

    min_cnt[0] = 0;
    min_cnt[1] = 0;
    min_cnt[2] = 1;
    min_cnt[3] = 1;

    for (int i = 4; i <= n; i++)
    {
        min_cnt[i] = min_cnt[i - 1] + 1;
        if (i % 2 == 0)
            min_cnt[i] = min(min_cnt[i], min_cnt[i / 2] + 1);
        if (i % 3 == 0)
            min_cnt[i] = min(min_cnt[i], min_cnt[i / 3] + 1);
    }

    cout << min_cnt[n] << endl;

    return 0;
}