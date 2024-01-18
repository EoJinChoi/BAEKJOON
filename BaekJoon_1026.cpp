// 2024.1.15

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b);

int main()
{
    int n;
    int min = 0;

    cin >> n;
    int list1[n];
    int list2[n];

    for (int i = 0; i < n; i++)
        cin >> list1[i];

    sort(list1, list1 + n);

    for (int i = 0; i < n; i++)
        cin >> list2[i];

    sort(list2, list2 + n, compare);

    for (int i = 0; i < n; i++)
        min += list1[i] * list2[i];

    cout << min << endl;

    return 0;
}

bool compare(int a, int b)
{
    return a > b;
}