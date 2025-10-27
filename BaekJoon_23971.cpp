// 2025.10.27

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double height, width, v, h;
    cin >> height >> width >> v >> h;

    int res = ceil(height / (v + 1)) * ceil(width / (h + 1));

    cout << res << "\n";

    return 0;
}