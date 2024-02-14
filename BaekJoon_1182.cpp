// 2024.2.14

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> s;
    int n, num, sum;
    int res = 0;

    cin >> n >> sum;

    for (int j = 0; j < n; j++)
    {
        cin >> num;
        s.push_back(num);
    }

    for (int i = 1; i <= n; i++)
    {
        vector<int> tmp;
        int cnt = i;

        for (int j = 0; j < n; j++)
        {
            if (cnt > 0)
                tmp.push_back(1);
            else
                tmp.push_back(0);
            cnt--;
        }

        do
        {
            int total = 0;
            for (int j = 0; j < s.size(); ++j)
            {
                if (tmp[j] == 1)
                    total += s[j];
            }
            if (total == sum)
                res++;
        } while (prev_permutation(tmp.begin(), tmp.end()));
    }

    cout << res << endl;

    return 0;
}