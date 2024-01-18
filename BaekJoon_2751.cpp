// 2024.1.12

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int num_list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_list[i]);
    }

    sort(num_list, num_list + n);

    for (int i = 0; i < n; i++)
        printf("%d\n", num_list[i]);
}