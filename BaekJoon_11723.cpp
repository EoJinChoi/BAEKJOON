// 2025.11.3

#include <iostream>
#include <cstring>

using namespace std;

static int set[20];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str1;
        cin >> str1;
        const char *opt = str1.c_str();

        if (strcmp(opt, "all") == 0)
            fill(set, set + 21, 1);
        else if (strcmp(opt, "empty") == 0)
            fill(set, set + 21, 0);
        else
        {
            string str2;
            cin >> str2;
            const char *opr = str2.c_str();

            if (strcmp(opt, "add") == 0)
                set[atoi(opr)] = 1;
            else if (strcmp(opt, "remove") == 0)
                set[atoi(opr)] = 0;
            else if (strcmp(opt, "check") == 0)
                cout << set[atoi(opr)] << "\n";
            else if (strcmp(opt, "toggle") == 0)
                set[atoi(opr)] = !set[atoi(opr)];
        }
    }

    return 0;
}