#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "vvedi x" << endl;
    cin >> x;
    double y;
    cout << "vvedi y" << endl;
    cin >> y;
    double z;
    cout << "vvedi z" << endl;
    cin >> z;
    cout << (x + y - z) / (pow(x, 2) + 2) << endl;


    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << x % 10 + x / 10 % 10 + x / 100;
}



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "vvedite dlinu osnovania" << endl;
    cin >> x;
    cout << "vvedite dlinu visoti" << endl;
    cin >> y;
    double z = x / 2;
    cout << "pol osnovania = " << z << endl;
    cout << "ploshad = " << z * y << endl;
    cout << "dlina bocovoi storoni = " << sqrt(pow(z, 2) + pow(y, 2));
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int R = 5;
    int x, y;
    cout << "vvedi x" << endl;
    cin >> x;
    cout << "vvedi y" << endl;
    cin >> y;
    cout << boolalpha;
    cout << "false - ne lejit, true - lejit = " << (sqrt(pow(x, 2) + pow(y, 2)) < R) << endl;

    return 0;
}

