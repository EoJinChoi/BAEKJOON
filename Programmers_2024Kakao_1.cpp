// 2024.4.3

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts)
{
    int answer = 0;

    int num[friends.size()][friends.size()];

    for (int i = 0; i < friends.size(); i++)
    {
        for (int j = 0; j < friends.size(); j++)
            num[i][j] = 0;
    }

    int recv_gift_cnt[friends.size()];
    for (int i = 0; i < friends.size(); i++)
        recv_gift_cnt[i] = 0;

    int gift_num[friends.size()][2];
    for (int i = 0; i < friends.size(); i++)
    {
        for (int j = 0; j < 2; j++)
            gift_num[i][j] = 0;
    }

    for (int i = 0; i < gifts.size(); i++)
    {
        string sender, receiver;
        int send, recv;
        stringstream ss(gifts.at(i));
        ss >> sender >> receiver;

        for (int j = 0; j < friends.size(); j++)
        {
            if (sender == friends.at(j))
            {
                send = j;
                gift_num[j][0]++;
            }
            if (receiver == friends.at(j))
            {
                recv = j;
                gift_num[j][1]++;
            }
        }

        num[send][recv]++;
    }

    for (int i = 0; i < friends.size(); i++)
    {
        for (int j = i + 1; j < friends.size(); j++)
        {
            if (num[i][j] > num[j][i])
                recv_gift_cnt[i]++;
            else if (num[i][j] < num[j][i])
                recv_gift_cnt[j]++;
            else if (num[i][j] == num[j][i])
            {
                if ((gift_num[i][0] - gift_num[i][1]) > (gift_num[j][0] - gift_num[j][1]))
                    recv_gift_cnt[i]++;
                else if ((gift_num[i][0] - gift_num[i][1]) < (gift_num[j][0] - gift_num[j][1]))
                    recv_gift_cnt[j]++;
            }
        }
    }

    for (int i = 0; i < friends.size(); i++)
    {
        if (recv_gift_cnt[i] > answer)
            answer = recv_gift_cnt[i];
    }

    return answer;
}

int main()
{
    vector<string> friends = {"joy", "brad", "alessandro", "conan", "david"};
    vector<string> gifts = {"alessandro brad", "alessandro joy", "alessandro conan", "david alessandro", "alessandro david"};

    int res = solution(friends, gifts);

    cout << res << endl;
}