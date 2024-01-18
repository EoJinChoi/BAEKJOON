// 2024.1.16

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b);

int main()
{
    int n;
    cin >> n;
    vector<string> words;

    for (int i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        words.push_back(w);
    }

    sort(words.begin(), words.end());
    words.erase(unique(words.begin(), words.end()), words.end());

    sort(words.begin(), words.end(), compare);

    for (int i = 0; i < words.size(); i++)
        cout << words.at(i) << endl;
}

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    else
        return (a.length() < b.length());
}