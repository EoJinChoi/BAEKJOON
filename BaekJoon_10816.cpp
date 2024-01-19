// 2024.1.19

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;

    cin >> n;
    int num_list[n];

    for (int i = 0; i < n; i++)
        cin >> num_list[i];

    cin >> m;
    int find_num[m];

    for (int i = 0; i < m; i++)
        cin >> find_num[i];

    sort(num_list, num_list + n);

    for (int i = 0; i < m; i++)
    {
        int *a = lower_bound(num_list, num_list + n, find_num[i]);
        int *b = upper_bound(num_list, num_list + n, find_num[i]);

        cout << b - a << " ";
    }
    cout << endl;

    return 0;
}