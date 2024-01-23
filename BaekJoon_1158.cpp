// 2024.1.23

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> res;
    int n, k;

    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++)
        v.push_back(i + 1);

    int cnt = 0;
    int idx = -1;

    cout << "<";
    while (cnt < n)
    {
        int inc_cnt = 0;
        while (inc_cnt < k)
        {
            idx++;

            if (idx == n)
                idx = 0;

            if (v.at(idx) != 0)
            {
                inc_cnt++;
            }
        }

        if (cnt == n - 1)
            cout << v.at(idx) << ">\n";
        else
            cout << v.at(idx) << ", ";
        v.at(idx) = 0;
        cnt++;
    }

    return 0;
}