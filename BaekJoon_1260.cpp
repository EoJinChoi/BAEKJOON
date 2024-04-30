// 2024.4.30

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> q;
stack<int> s;

void dfs(int **arr, bool *isVisited, int n)
{
    if (s.empty())
        return;

    int v = s.top();
    s.pop();
    cout << v + 1 << " ";

    for (int i = 0; i < n; i++)
    {
        if (arr[v][i] == 1 && !isVisited[i])
        {
            s.push(i);
            isVisited[i] = true;
            dfs(arr, isVisited, n);
        }
    }
}

void bfs(int **arr, bool *isVisited, int n)
{
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v + 1 << " ";

        for (int i = 0; i < n; i++)
        {
            if (arr[v][i] == 1 && !isVisited[i])
            {
                q.push(i);
                isVisited[i] = true;
            }
        }
    }
}

int main()
{
    int n, m, start;

    cin >> n >> m >> start;

    int **arr = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[n];
    }
    bool isVisited_bfs[n];
    bool isVisited_dfs[n];

    // initialize
    for (int i = 0; i < n; i++)
    {
        isVisited_bfs[i] = false;
        isVisited_dfs[i] = false;
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        int r, c;
        cin >> r >> c;

        arr[r - 1][c - 1] = 1;
        arr[c - 1][r - 1] = 1;
    }

    // BFS
    isVisited_dfs[start - 1] = true;
    s.push(start - 1);

    dfs(arr, isVisited_dfs, n);
    cout << endl;

    // DFS
    isVisited_bfs[start - 1] = true;
    q.push(start - 1);

    bfs(arr, isVisited_bfs, n);
    cout << endl;

    return 0;
}