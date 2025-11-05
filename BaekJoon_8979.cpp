// 2025.11.5

#include <iostream>
#include <algorithm>

using namespace std;

struct country
{
    int idx;
    int gold;
    int silver;
    int bronze;
};

bool cmp(country a, country b)
{
    if (a.gold > b.gold)
        return true;
    else if (a.gold == b.gold)
    {
        if (a.silver > b.silver)
            return true;
        else if (a.silver == b.silver)
        {
            if (a.bronze > b.bronze)
                return true;
        }
    }

    return false;
}

int main()
{
    int N, K;
    int idx, g, s, b;
    int rank = 0, val = 0;
    cin >> N >> K;

    country arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> idx >> g >> s >> b;

        arr[i].idx = idx;
        arr[i].gold = g;
        arr[i].silver = s;
        arr[i].bronze = b;
    }

    sort(arr, arr + N, cmp);

    for (int i = 0; i < N; i++)
    {
        if (arr[i].idx == K)
        {
            rank = i;
            break;
        }
    }

    for (int i = rank - 1; i >= 0; i--)
    {
        if (arr[i].gold != arr[rank].gold || arr[i].silver != arr[rank].silver || arr[i].bronze != arr[rank].bronze)
            break;

        val++;
    }

    cout << rank - val + 1 << "\n";

    return 0;
}