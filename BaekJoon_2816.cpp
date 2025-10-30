// 2025.10.30

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    int kbs1, kbs2;
    cin >> N;

    string c_name[N];
    for (int i = 0; i < N; i++)
    {
        cin >> c_name[i];
        const char *c = c_name[i].c_str();
        if (strcmp(c, "KBS1") == 0)
            kbs1 = i;
        else if (strcmp(c, "KBS2") == 0)
            kbs2 = i;
    }

    for (int i = 0; i < kbs1; i++)
        cout << 1;
    for (int i = 0; i < kbs1; i++)
        cout << 4;

    if (kbs1 > kbs2)
        kbs2 += 1;

    for (int i = 0; i < kbs2; i++)
        cout << 1;
    for (int i = 0; i < kbs2 - 1; i++)
        cout << 4;
    cout << "\n";

    return 0;
}