#include <iostream>
#include <string>
using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"};

string board[50];

int WB_cnt(int a, int b)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i + a][j + b] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}
int BW_cnt(int a, int b)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i + a][j + b] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    int N, M;
    int min_val = 100;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> board[i];

    for (int i = 0; i + 8 <= N; i++)
    {
        for (int j = 0; j + 8 <= M; j++)
        {
            int tmp = min(WB_cnt(i, j), BW_cnt(i, j));
            if (tmp < min_val)
                min_val = tmp;
        }
    }

    cout << min_val << "\n";

    return 0;
}