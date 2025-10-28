// 2025.10.28

#include <iostream>

using namespace std;

int main()
{
    int l1, l2, l3;

    while (1)
    {
        cin >> l1 >> l2 >> l3;
        if (l1 == 0 && l2 == 0 && l3 == 0)
            break;

        int m = max(max(l1, l2), l3);

        if (m >= (l1 + l2 + l3) - m)
            cout << "Invalid\n";
        else if (l1 == l2 && l2 == l3)
            cout << "Equilateral\n";
        else if (l1 == l2 || l2 == l3 || l3 == l1)
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }

    return 0;
}