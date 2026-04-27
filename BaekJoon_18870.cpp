#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> v;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    vector<int> v_sort(v);

    sort(v_sort.begin(), v_sort.end());
    v_sort.erase(unique(v_sort.begin(), v_sort.end()), v_sort.end());

    for (int i = 0; i < N; i++)
    {
        int idx = lower_bound(v_sort.begin(), v_sort.end(), v[i]) - v_sort.begin();

        if (i == N - 1)
            cout << idx << "\n";
        else
            cout << idx << " ";
    }

    return 0;
}