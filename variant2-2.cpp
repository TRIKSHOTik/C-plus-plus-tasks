#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double H(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);
    double p = (a + b + c) / 2;

    return (2 / a) * sqrt(p * (p - a) * (p - b) * (p - c));
}

double min3(double x, double y, double z) {
    if (x <= y && x <= z) {
        return x;
    }
    else if (y <= x && y <= z) {
        return y;
    }
    else {
        return z;
    }
}

int main() {
    setlocale(0, "");

    double x1, y1;
    cout << "Координаты точки первой вершины тругольника: ";
    cin >> x1 >> y1;

    double x2, y2;
    cout << "Координаты точки второй вершины тругольника: ";
    cin >> x2 >> y2;

    double x3, y3;
    cout << "Координаты точки третьей вершины тругольника: ";
    cin >> x3 >> y3;

    double x, y;
    cout << "Координаты произвольной точки, лежащей внутри треугольника: ";
    cin >> x >> y;

    double h1 = H(x1, y1, x2, y2, x, y);
    double h2 = H(x2, y2, x3, y3, x, y);
    double h3 = H(x1, y1, x3, y3, x, y);

    cout << min3(h1, h2, h3);

    return 0;
}
