// 2024.1.22

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<char> v;
    stack<int> stack;

    scanf("%d", &n);
    int list[n];
    int sort_list[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        list[i] = num;
        sort_list[i] = num;
    }

    sort(sort_list, sort_list + n);

    int idx = 0;
    int sort_idx = 0;
    while (1)
    {
        if (!stack.empty() && stack.top() == list[idx])
        {
            stack.pop();
            v.push_back('-');
            idx++;
            continue;
        }

        if (sort_idx == n)
            break;

        stack.push(sort_list[sort_idx]);
        v.push_back('+');
        sort_idx++;
    }

    if (idx == n)
    {
        for (int i = 0; i < v.size(); i++)
            printf("%c\n", v.at(i));
    }
    else
        printf("NO\n");

    return 0;
}