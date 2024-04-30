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
    priority_queue<int, vector<int>, greater<int>> heap;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;

        if (op > 0)
            heap.push(op);
        else if (op == 0)
        {
            if (heap.empty())
                cout << "0\n";
            else
            {
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
    }

    return 0;
}