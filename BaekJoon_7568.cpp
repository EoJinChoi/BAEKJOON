// 2025.11.11

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int size[50][2];

    for (int i = 0; i < N; i++)
        cin >> size[i][0] >> size[i][1];

    for (int i = 0; i < N; i++)
    {
        int rank = 1;
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;

            if (size[j][0] > size[i][0] && size[j][1] > size[i][1])
                rank++;
        }
        cout << rank << " ";
    }
    cout << "\n";

    return 0;
}