// 2024.7.3

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str;
    int cnt = 0;

    getline(cin, str);
    char *str2 = strcpy(new char[str.length() + 1], str.c_str());

    char *word;
    word = strtok(str2, " ");

    while (word != NULL)
    {
        word = strtok(NULL, " ");
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}