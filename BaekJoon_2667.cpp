// 2024.2.2

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int cnt = 0;
int ary[26][26];
vector<int> v;

void bfs(int x, int y)
{
    ary[x][y] = 0;
    cnt++;

    if (x + 1 < n && ary[x + 1][y])
        bfs(x + 1, y);
    if (x - 1 >= 0 && ary[x - 1][y])
        bfs(x - 1, y);
    if (y - 1 >= 0 && ary[x][y - 1])
        bfs(x, y - 1);
    if (y + 1 < n && ary[x][y + 1])
        bfs(x, y + 1);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;

        for (int j = 0; j < n; j++)
        {
            if (num[j] == '1')
                ary[i][j] = 1;
            else
                ary[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i][j] == 1)
            {
                cnt = 0;
                bfs(i, j);
                v.push_back(cnt);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;
}