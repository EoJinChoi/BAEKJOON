// 2025.11.12

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<char>> v(N + 1, vector<char>(N + 1));
    int heart_x, heart_y;

    bool head = true;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> v[i][j];
            if (head && v[i][j] == '*')
            {
                heart_x = i + 1;
                heart_y = j;
                head = false;
            }
        }
    }
    cout << heart_x << " " << heart_y << "\n";

    // arms
    int l_arm = 0, r_arm = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i > heart_y && v[heart_x][i] != '*')
            break;

        if (v[heart_x][i] == '*')
        {
            if (i < heart_y)
                l_arm++;
            else if (i > heart_y)
                r_arm++;
        }
    }
    cout << l_arm << " " << r_arm << " ";

    // waist
    int x = heart_x + 1;
    int waist = 0;
    while (v[x][heart_y] == '*')
    {
        waist++;
        x++;
    }
    cout << waist << " ";

    // legs
    int l_leg = 0, r_leg = 0;
    for (int i = heart_x + waist + 1; i <= N; i++)
    {
        if (v[i][heart_y - 1] != '*' && v[i][heart_y + 1] != '*')
            break;

        if (v[i][heart_y - 1] == '*')
            l_leg++;
        if (v[i][heart_y + 1] == '*')
            r_leg++;
    }
    cout << l_leg << " " << r_leg << "\n";

    return 0;
}