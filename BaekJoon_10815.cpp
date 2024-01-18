// 2024.1.15

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;

    scanf("%d", &n);
    int num_list[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &num_list[i]);

    sort(num_list, num_list + n);

    scanf("%d", &m);
    int find_num[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &find_num[i]);
        if (binary_search(num_list, num_list + n, find_num[i]))
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");

    return 0;
}