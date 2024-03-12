// 2024.3.12

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int score[n];
    int max_score[n];

    for (int i = 0; i < n; i++)
        cin >> score[i];

    max_score[0] = score[0];
    max_score[1] = score[0] + score[1];
    max_score[2] = max(score[1] + score[2], score[0] + score[2]);

    for (int i = 3; i < n; i++)
        max_score[i] = max(max_score[i - 3] + score[i - 1] + score[i], max_score[i - 2] + score[i]);

    cout << max_score[n - 1] << endl;

    return 0;
}