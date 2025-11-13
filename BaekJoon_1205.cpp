// 2025.11.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, score, P;
    int rank = 1, cnt = 0;
    vector<int> r_list;

    cin >> N >> score >> P;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        r_list.push_back(a);
    }
    sort(r_list.begin(), r_list.end(), greater<int>());

    for (int i = 0; i < N; i++)
    {
        if (r_list[i] > score)
            rank++;
        else if (r_list[i] == score)
            rank = rank;
        else
            break;
        cnt++;
    }

    if (cnt == P)
        rank = -1;
    if (N == 0)
        rank = 1;

    cout << rank << "\n";

    return 0;
}