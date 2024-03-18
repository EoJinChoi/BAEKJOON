// 2024.3.18

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cost[3];
    int min_cost[n + 1][3];
    min_cost[0][0] = 0;
    min_cost[0][1] = 0;
    min_cost[0][2] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];

        min_cost[i][0] = min(min_cost[i - 1][1], min_cost[i - 1][2]) + cost[0];
        min_cost[i][1] = min(min_cost[i - 1][0], min_cost[i - 1][2]) + cost[1];
        min_cost[i][2] = min(min_cost[i - 1][0], min_cost[i - 1][1]) + cost[2];
    }

    cout << min(min_cost[n][0], min(min_cost[n][1], min_cost[n][2])) << endl;

    return 0;
}