// 2024.2.16

#include <iostream>

using namespace std;

int main()
{
    int num;
    int prime_cnt = 0;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        bool isPrime = true;
        int n;
        cin >> n;

        if (n == 1)
            isPrime = false;

        for (int j = 2; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            prime_cnt++;
    }

    cout << prime_cnt << endl;

    return 0;
}