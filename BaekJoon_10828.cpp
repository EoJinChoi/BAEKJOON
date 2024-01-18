// 2024.1.4

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    stack<int> stack;
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
                if (!stack.empty())
                {
                    cout << stack.top() << endl;
                    stack.pop();
                }
                else
                    cout << "-1" << endl;
                ;
            }
            else if (command == "size")
                cout << stack.size() << endl;
            else if (command == "empty")
                cout << stack.empty() << endl;
            else if (command == "top")
            {
                if (!stack.empty())
                    cout << stack.top() << endl;
                else
                    cout << "-1" << endl;
            }
        }
        else
        {
            stringstream ss(command);
            string first, second;
            ss >> first >> second;

            if (first == "push")
                stack.push(stoi(second));
        }
    }
}