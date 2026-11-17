
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 1.825e2;
    double y = 18.225;
    double z = -3.298e2;

    double omega =
        abs((x / y) * x - sqrt(y / pow(x, 3)))
        + (y - x) * cos(y)
        - z / ((y - x) * (1 + pow(y - x, 2)));

    cout << "Omega = " << omega << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}
