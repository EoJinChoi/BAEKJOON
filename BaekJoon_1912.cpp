// 2024.5.2

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    int max_sum = numbers[0];
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += numbers[i];
        if (curr_sum > max_sum)
            max_sum = curr_sum;
        if (curr_sum < 0) // 합이 음수이면 새로 시작
            curr_sum = 0;
    }

    cout << max_sum << endl;

    return 0;
}