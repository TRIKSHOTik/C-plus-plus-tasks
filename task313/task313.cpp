#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double h;
    cout << "vvedi h - znachenie chaga = ";
    cin >> h;
    cout << " --------------------" << endl;
    for (int i = -3; i + h <= 3; i += h) {
        cout << (pow(i, 2) - 5 * i - 3) << endl;
    }
    cout << "---------------------" << endl;
    return 0;
}
