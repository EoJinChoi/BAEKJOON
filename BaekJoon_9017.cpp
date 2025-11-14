#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int cnt[201] = {0,};
        int score[201] = {0,};
        int five[201];
        int N;

        cin >> N;

        vector<int> v(N);

        for (int j = 0; j < N; j++)
        {
            cin >> v[j];
            cnt[v[j]]++;
        }

        int four_cnt[201] = {0,};
        int s = 1;

        for (int j = 0; j < N; j++)
        {
            if (cnt[v[j]] >= 6)
            {
                if (four_cnt[v[j]] < 4)
                    score[v[j]] += s;
                else if (four_cnt[v[j]] == 4)
                    five[v[j]] = s;

                four_cnt[v[j]]++;
                s++;
            }
        }

        int idx = 0;
        score[0] = INT_MAX;
        for (int j = 1; j <= 200; j++)
        {
            if (score[j] != 0)
            {
                if (score[j] < score[idx])
                    idx = j;
                else if (score[j] == score[idx])
                {
                    if (five[j] < five[idx])
                        idx = j;
                }
            }
        }

        cout << idx << "\n";
    }

    return 0;
}