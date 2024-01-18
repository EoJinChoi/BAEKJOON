// 2024.1.18

#include <iostream>
#include <vector>
#include <algorithm>

#define p pair<int, int>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b);

int main()
{
    int n;
    vector<p> v;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", v.at(i).first, v.at(i).second);

    return 0;
}

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}