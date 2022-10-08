#include <iostream>

using namespace std;

int fibanachi(int x) {
    if (x < 1)
        return 0;
    if (x == 1) {
        return 1;
    }
    else {
        return fibanachi(x - 1) + fibanachi(x - 2);
    }

}
int main()
{
    int y;
    int res = 0;
    cout << "vvedi y = ";
    cin >> y;
    while (res < y) {
        cout << fibanachi(res) << endl;
        res++;
    }
    return 0;
}