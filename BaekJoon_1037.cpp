// 2024.2.15

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cnt;
    int num;
    vector<int> v;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    if (cnt == 1)
        num = v.front() * v.front();
    else
        num = v.front() * v.back();

    cout << num << endl;

    return 0;
}