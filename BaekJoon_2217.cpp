// 2024.3.9

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int rope[n];
    for (int i = 0; i < n; i++)
        cin >> rope[i];

    sort(rope, rope + n);

    int max_weight = rope[0] * n;

    for (int i = 1; i < n; i++)
    {
        if (rope[i] * (n - i) > max_weight)
            max_weight = rope[i] * (n - i);
    }

    cout << max_weight << endl;

    return 0;
}