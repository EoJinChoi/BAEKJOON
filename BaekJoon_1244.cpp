// 2025.11 13

#include <iostream>

using namespace std;

int main()
{
    int N, S;
    int state[100];

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> state[i];

    cin >> S;
    for (int i = 0; i < S; i++)
    {
        int sex, num;
        cin >> sex >> num;

        if (sex == 1) // male
        {
            for (int j = num; j <= N; j += num)
                state[j] = !state[j];
        }
        else // female
        {
            int k = 1;
            while (num - k >= 1 && num + k <= N)
            {
                if (state[num - k] != state[num + k])
                    break;
                k++;
            }

            state[num] = !state[num];
            for (int j = 1; j <= k - 1; j++)
            {
                state[num - j] = !state[num - j];
                state[num + j] = !state[num + j];
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (i > 1 && i % 20 == 1)
            cout << "\n";
        if (i == N)
            cout << state[i] << "\n";
        else
            cout << state[i] << " ";
    }

    return 0;
}