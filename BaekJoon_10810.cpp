// 2024.7.2

#include <iostream>

using namespace std;

int main()
{
    int basket_num = 0;
    int num;

    cin >> basket_num >> num;
    int basket[basket_num];

    for (int i = 0; i < basket_num; i++)
        basket[i] = 0;

    for (int i = 0; i < num; i++)
    {
        int begin, end, n;
        cin >> begin >> end >> n;

        for (int j = begin - 1; j <= end - 1; j++)
            basket[j] = n;
    }

    for (int i = 0; i < basket_num; i++)
        cout << basket[i] << " ";
    cout << endl;

    return 0;
}