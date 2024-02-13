// 2024.2.13

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (1)
    {
        vector<int> s;
        vector<int> tmp;
        int k, num;

        cin >> k;
        if (k == 0)
            break;

        int cnt = 6;
        for (int i = 0; i < k; i++)
        {
            cin >> num;
            s.push_back(num);
            if (cnt > 0)
                tmp.push_back(1);
            else
                tmp.push_back(0);
            cnt--;
        }

        do
        {
            for (int i = 0; i < s.size(); ++i)
            {
                if (tmp[i] == 1)
                    cout << s[i] << " ";
            }
            cout << endl;
        } while (prev_permutation(tmp.begin(), tmp.end()));

        cout << endl;
    }

    return 0;
}