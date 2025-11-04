// 2025.11.4

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 0)
        cout << "CY\n";
    else if (N % 2 == 1)
        cout << "SK\n";

    return 0;
}