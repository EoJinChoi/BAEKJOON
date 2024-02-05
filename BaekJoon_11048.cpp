// 2024.2.5

#include <iostream>

using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;

    int maze[r][c];
    int count[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> maze[i][j];
            count[i][j] = 0;
        }
    }

    count[0][0] = maze[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i + 1 < r && (count[i][j] + maze[i + 1][j] > count[i + 1][j]))
                count[i + 1][j] = count[i][j] + maze[i + 1][j];
            if (j + 1 < c && (count[i][j] + maze[i][j + 1] > count[i][j + 1]))
                count[i][j + 1] = count[i][j] + maze[i][j + 1];
            if (i + 1 < r && j + 1 < c && (count[i][j] + maze[i + 1][j + 1] > count[i + 1][j + 1]))
                count[i + 1][j + 1] = count[i][j] + maze[i + 1][j + 1];
        }
    }

    cout << count[r - 1][c - 1] << endl;

    return 0;
}