// 2024.1.6

#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    string command;
    deque<int> dq;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, command);

        if (command.find(" ") == string::npos)
        {
            if (command == "pop_front")
            {
                if (dq.empty())
                    cout << -1 << endl;
                else
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
            else if (command == "pop_back")
            {
                if (dq.empty())
                    cout << -1 << endl;
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
            else if (command == "size")
                cout << dq.size() << endl;
            else if (command == "empty")
                cout << dq.empty() << endl;
            else if (command == "front")
            {
                if (dq.empty())
                    cout << -1 << endl;
                else
                {
                    cout << dq.front() << endl;
                }
            }
            else if (command == "back")
            {
                if (dq.empty())
                    cout << -1 << endl;
                else
                {
                    cout << dq.back() << endl;
                }
            }
        }
        else
        {
            stringstream ss(command);
            string first, second;
            ss >> first >> second;

            if (first == "push_front")
                dq.push_front(stoi(second));
            else if (first == "push_back")
                dq.push_back(stoi(second));
        }
    }
}