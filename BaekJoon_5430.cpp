// 2024.2.1

#include <iostream>
#include <string>
#include <deque>
#include <sstream>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string func, nums;
        int n;
        deque<int> num_list;
        bool isError = false;

        cin >> func;
        cin >> n;
        cin >> nums;

        nums = nums.substr(1, nums.length() - 2);

        string tmp;
        istringstream ss(nums);
        while (getline(ss, tmp, ','))
            num_list.push_back(stoi(tmp));

        int reverse_cnt = 0;
        for (int j = 0; j < func.length(); j++)
        {
            if (func.at(j) == 'R')
                reverse_cnt++;
            else if (func.at(j) == 'D')
            {
                if (num_list.empty())
                {
                    cout << "error\n";
                    isError = true;
                    break;
                }
                else
                {
                    if (reverse_cnt % 2 == 0)
                        num_list.pop_front();
                    else
                        num_list.pop_back();
                }
            }
        }

        int size = num_list.size();

        if (!isError)
        {
            cout << "[";
            for (int j = 0; j < size; j++)
            {
                if (j == size - 1)
                    cout << num_list.front();
                else if (reverse_cnt % 2 == 0)
                {
                    cout << num_list.front() << ",";
                    num_list.pop_front();
                }
                else if (reverse_cnt % 2 != 0)
                {
                    cout << num_list.back() << ",";
                    num_list.pop_back();
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}