#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    unordered_map<string, string> log;
    vector<string> exist_name;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string name, stat;
        cin >> name >> stat;

        if (log.count(name) == 0)
            log.insert(make_pair(name, stat));
        else
            log[name] = stat;
    }

    for (const auto &[key, value] : log)
    {
        if (value == "enter")
            exist_name.push_back(key);
    }

    sort(exist_name.begin(), exist_name.end(), greater<>());

    for (int i = 0; i < exist_name.size(); i++)
        cout << exist_name[i] << "\n";

    return 0;
}