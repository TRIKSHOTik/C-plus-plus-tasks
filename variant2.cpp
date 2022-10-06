#include <iostream>
using namespace std;
bool
check(int x)
{
    if (x < 10)
        return true;
    int prevNum = x % 10;
    int curNum = (x / 10) % 10;
    bool bad = false;
    while (x > 0)
    {
        if (prevNum <= curNum)
        {
            bad = true;
            break;
        }
        x /= 10;
        prevNum = x % 10;
        curNum = (x / 10) % 10;
    }
    if (bad)
    {
        return false;
    }
    return true;
}

int
main()
{
    int m, n, i;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    bool p = false;
    for (int i = n; i <= m; i++)
        if (check(i))
        {
            cout << i << " ";
            p = true;
        }
    if (!p)
        cout << "net chisel" << endl;
    return 0;
}
