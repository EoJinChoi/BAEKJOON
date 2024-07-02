// 2024.7.2

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int basket_num, n;

    cin >> basket_num >> n;
    vector<int> basket;

    for (int i = 0; i < basket_num; i++)
        basket.push_back(i + 1);

    for (int i = 0; i < n; i++)
    {
        int begin, end;
        cin >> begin >> end;

        reverse(basket.begin() + (begin - 1), basket.begin() + end);
    }

    for (int i = 0; i < basket_num; i++)
        cout << basket.at(i) << " ";

    cout << endl;

    return 0;
}