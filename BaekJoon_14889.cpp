// 2024.2.20

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> s;
    vector<int> tmp;
    vector<vector<int> > com1;
    vector<vector<int> > com2;

    cin >> n;

    int stats[n][n];
    int cnt = n / 2;

    // 조합 만들어 저장하기
    for (int i = 0; i < n; i++)
    {
        s.push_back(i);
        if (cnt > 0)
            tmp.push_back(1);
        else
            tmp.push_back(0);

        for (int j = 0; j < n; j++)
            cin >> stats[i][j];

        cnt--;
    }

    do
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < s.size(); i++)
        {
            if (tmp[i] == 1)
                v1.push_back(s[i]);
            else
                v2.push_back(s[i]);
        }

        com1.push_back(v1);
        com2.push_back(v2);
    } while (prev_permutation(tmp.begin(), tmp.end()));

    int min = 100;

    // 팀별 능력치 구하기, 차이 구하기
    for (int i = 0; i < com1.size(); i++)
    {
        int team_stat1 = 0;
        int team_stat2 = 0;
        for (int j = 0; j < com1[i].size(); j++)
        {
            for (int k = 0; k < com1[i].size(); k++)
            {
                if (k == j)
                    continue;

                team_stat1 += stats[com1[i][j]][com1[i][k]];
                team_stat2 += stats[com2[i][j]][com2[i][k]];
            }
        }
        int diff = abs(team_stat1 - team_stat2);

        if (diff < min)
            min = diff;
    }

    cout << min << endl;

    return 0;
}