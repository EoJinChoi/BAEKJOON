// 2024.1.26

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int doc_cnt, pos;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        queue<pair<int, int> > q;
        vector<int> v;

        cin >> doc_cnt;
        cin >> pos;

        for (int j = 0; j < doc_cnt; j++)
        {
            int priority;
            cin >> priority;
            v.push_back(priority);
            q.push(make_pair(j, priority));
        }

        sort(v.begin(), v.end());

        int cnt = 0;
        while (1)
        {
            if (q.front().first == pos && upper_bound(v.begin(), v.end(), q.front().second) == v.end())
            {
                    cnt++;
                    break;
            }
            else
            {
                auto a = upper_bound(v.begin(), v.end(), q.front().second);
                if (a == v.end())
                {
                    cnt++;
                    q.pop();
                    v.erase(a - 1);
                }
                else
                {
                    q.push(q.front());
                    q.pop();
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}