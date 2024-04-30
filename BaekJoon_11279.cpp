// 2024.4.30

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    priority_queue<int> max_heap;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;

        if (op > 0)
            max_heap.push(op);
        else if (op == 0)
        {
            if (max_heap.empty())
                cout << "0\n";
            else
            {
                cout << max_heap.top() << "\n";
                max_heap.pop();
            }
        }
    }

    return 0;
}