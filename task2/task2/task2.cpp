#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int x, a1, a2, a3, a4;
    cout << "Введи натуральное число" << endl;
    cin >> x;
    a1 = x / 1000;
    a2 = x / 100 % 10;
    a3 = x / 10 % 10 % 10;
    a4 = x % 10;
    if (x >= 1000 && x <= 9999) {
        cout << "Число четырехзначное" << endl;
    }
    else {
        cout << "Число не четырехзначное" << endl;
    }
    if (a1 > a2 && a2 > a3 && a3 > a4) {

        cout << "Цифры расположены в порядке убывания" << endl;
    }
    else {
        cout << "Цифры не расположены в порядке убывания" << endl;
    }

    return 0;
}




#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int x;
    cout << "Напиши х и программа вычислит функцию" << endl;
    cin >> x;
    if (x < -7) {
        cout << x - 7 << endl;
    }
    if (x >= -7 && x <= 7) {
        cout << sqrt(49 - pow(x, 2)) << endl;
    }
    else {
        cout << -x + 7 << endl;
    }
    return 0;
}





#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int a, x, y, R1, R2;
    cout << "Введи x" << endl;
    cin >> x;
    cout << "Введи y" << endl;
    cin >> y;
    a = sqrt(pow(x, 2) + pow(y, 2));

    if (a > R1 && a < R2) {
        cout << "Принадлежит зоне" << endl;
    }
    else {
        cout << "Не Принадлежит зоне" << endl;
    }
}