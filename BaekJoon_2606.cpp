// 2024.1.30

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int com_cnt;
    int pair_cnt;
    int cnt = 0;
    queue<int> q;

    cin >> com_cnt;
    cin >> pair_cnt;

    int adj_table[com_cnt][com_cnt];
    bool isVisit[com_cnt];

    // initialize
    for (int i = 0; i < com_cnt; i++)
        for (int j = 0; j < com_cnt; j++)
            adj_table[i][j] = 0;

    for (int i = 0; i < com_cnt; i++)
        isVisit[i] = false;

    for (int i = 0; i < pair_cnt; i++)
    {
        int a, b;
        cin >> a >> b;

        adj_table[a - 1][b - 1] = 1;
        adj_table[b - 1][a - 1] = 1;
    }

    int v = 0;
    isVisit[v] = true;
    q.push(v);

    // bfs
    while (!q.empty())
    {
        v = q.front();
        q.pop();

        for (int i = 0; i < com_cnt; i++)
        {
            if (adj_table[v][i] == 1 && !isVisit[i])
            {
                isVisit[i] = true;
                q.push(i);
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}