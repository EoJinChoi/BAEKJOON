// 2024.1.6

#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    queue<int> q;
    string command;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, command);

        if (command.find(" ") == string::npos)
        {
            if (command == "pop")
            {
                if (q.empty())
                    cout << -1 << endl;
                else
                {
                    cout << q.front() << endl;
                    q.pop();
                }
            }
            else if (command == "size")
                cout << q.size() << endl;
            else if (command == "empty")
                cout << q.empty() << endl;
            else if (command == "front")
            {
                if (q.empty())
                    cout << -1 << endl;
                else
                    cout << q.front() << endl;
            }
            else if (command == "back")
            {
                if (q.empty())
                    cout << -1 << endl;
                else
                    cout << q.back() << endl;
            }
        }
        else
        {
            stringstream ss(command);
            string first, second;
            ss >> first >> second;

            if (first == "push")
                q.push(stoi(second));
        }
    }
}