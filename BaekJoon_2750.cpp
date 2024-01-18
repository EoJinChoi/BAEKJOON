// 2024.1.10

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int num_list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num_list[i];
    }

    sort(num_list, num_list + n);

    for (int i = 0; i < n; i++)
        cout << num_list[i] << endl;
}