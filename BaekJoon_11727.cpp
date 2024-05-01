// 2024.5.1

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;

    cin >> n;

    v.push_back(1);
    v.push_back(3);

    for (int i = 2; i < n; i++)
    {
        v.push_back((v.at(i - 1) + (v.at(i - 2) * 2)) % 10007);
    }

    cout << v.at(n - 1) << endl;

    return 0;
}