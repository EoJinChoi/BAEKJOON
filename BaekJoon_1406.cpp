#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string init;
    string command;
    int n;
    stack<char> l_stack;
    stack<char> r_stack;

    cin >> init;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < init.length(); i++)
        l_stack.push(init[i]);

    for (int i = 0; i < n; i++)
    {
        getline(cin, command);

        stringstream ss(command);
        string first, second;
        ss >> first >> second;

        if (second == "")
        {
            if (first == "L")
            {
                if (!l_stack.empty())
                {
                    r_stack.push(l_stack.top());
                    l_stack.pop();
                }
            }
            else if (first == "D")
            {
                if (!r_stack.empty())
                {
                    l_stack.push(r_stack.top());
                    r_stack.pop();
                }
            }
            else if (first == "B")
            {
                if (!l_stack.empty())
                    l_stack.pop();
            }
        }
        else
        {
            if (first == "P")
                l_stack.push(second[0]);
        }
    }

    int l_size = l_stack.size();

    if (!l_stack.empty())
    {
        for (int i = 0; i < l_size; i++)
        {
            r_stack.push(l_stack.top());
            l_stack.pop();
        }
    }

    int r_size = r_stack.size();

    for (int i = 0; i < r_size; i++)
    {
        cout << r_stack.top();
        r_stack.pop();
    }
    cout << endl;
}