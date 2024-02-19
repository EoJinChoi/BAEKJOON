// 2024.2.19

#include <iostream>

using namespace std;
int gcd(int a, int b);

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    int GCD = gcd(n1, n2);
    int LCM = (n1 * n2) / GCD;

    cout << GCD << endl;
    cout << LCM << endl;
}

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}