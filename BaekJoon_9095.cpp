// 2024.2.19

#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[11] = {0,};

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int res;
        int num;
        cin >> num;

        if (arr[num - 1] != 0)
            res = arr[num - 1];
        else if (arr[num - 2] != 0)
        {
            arr[num - 1] = arr[num - 2] + arr[num - 3] + arr[num - 4];
            res = arr[num - 1];
        }
        else
        {
            int idx = 3;
            while (arr[num - 1] == 0)
            {
                if (arr[idx] != 0)
                    idx++;
                else
                {
                    arr[idx] = arr[idx - 1] + arr[idx - 2] + arr[idx - 3];
                    idx++;
                }
            }
            res = arr[num - 1];
        }

        cout << res << endl;
    }

    return 0;
}