// 2025.11.4

#include <iostream>

using namespace std;

int main()
{
    int P;
    cin >> P;

    for (int i = 0; i < P; i++)
    {
        int cnt = 0;
        int test_num;
        cin >> test_num;
        int height[20];

        for (int j = 0; j < 20; j++)
        {
            cin >> height[j];
            int now = height[j];

            if (j == 0)
                continue;

            if (height[j - 1] > height[j])
            {
                int idx = j;
                for (int k = j - 1; k >= 0; k--)
                {
                    if (height[k] > now)
                        idx = k;
                }

                for (int k = j; k > idx; k--)
                {
                    height[k] = height[k - 1];
                    cnt++;
                }

                height[idx] = now;
            }
        }

        cout << test_num << " " << cnt << "\n";
    }

    return 0;
}