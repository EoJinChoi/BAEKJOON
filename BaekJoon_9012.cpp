// 2024.1.21

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stack<char> stack;
        string p;
        cin >> p;

        for (int j = 0; j < p.length(); j++)
        {
            if (p[j] == '(')
                stack.push(p[j]);
            else if (p[j] == ')')
            {
                if (!stack.empty() && stack.top() == '(')
                    stack.pop();
                else
                {
                    stack.push(p[j]);
                    break;
                }
            }
        }

        if (stack.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}