// 2024.3.7

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    vector<pair<int, int> > chicken;
    vector<pair<int, int> > house;
    vector<int> tmp;

    cin >> n >> m;
    int city[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> city[i][j];
            if (city[i][j] == 2)
                chicken.push_back(make_pair(i, j));
            else if (city[i][j] == 1)
                house.push_back(make_pair(i, j));
        }
    }

    for (int i = 0; i < chicken.size(); i++)
    {
        if (m > 0)
        {
            m--;
            tmp.push_back(1);
        }
        else
            tmp.push_back(0);
    }

    int min_dist;
    int idx = 0;
    do
    {
        int dist = 0;
        vector<pair<int, int> > v;

        for (int i = 0; i < chicken.size(); i++)
        {
            if (tmp[i] == 1)
                v.push_back(chicken[i]);
        }

        for (int i = 0; i < house.size(); i++)
        {
            int min = (n - 1) * 2;

            for (int k = 0; k < v.size(); k++)
            {
                int d = abs(house.at(i).first - v.at(k).first) + abs(house.at(i).second - v.at(k).second);
                if (d < min)
                    min = d;
            }
            dist += min;
        }

        if (idx == 0)
        {
            min_dist = dist;
            idx++;
        }
        else
        {
            if (dist < min_dist)
                min_dist = dist;
        }
    } while (prev_permutation(tmp.begin(), tmp.end()));

    cout << min_dist << endl;
}