// 2025.11.11

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int N;
    char game;
    set<string> name;

    cin >> N >> game;

    for (int i = 0; i < N; i++)
    {
        string n;
        cin >> n;
        name.insert(n);
    }

    if (game == 'Y')
        cout << name.size() << "\n";
    else if (game == 'F')
        cout << name.size() / 2 << "\n";
    else if (game == 'O')
        cout << name.size() / 3 << "\n";

    return 0;
}