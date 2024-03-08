// 2024.3.8

#include <iostream>

using namespace std;

int main()
{
    int tree_len;
    int day, night;
    int total_day;

    cin >> day >> night >> tree_len;

    int tmp = tree_len - day;
    int one_day = day - night;

    if (tree_len - day <= 0)
        total_day = 1;
    else
    {
        if (tmp % one_day == 0)
            total_day = tmp / one_day + 1;
        else
            total_day = tmp / one_day + 2;
    }

    cout << total_day << endl;

    return 0;
}