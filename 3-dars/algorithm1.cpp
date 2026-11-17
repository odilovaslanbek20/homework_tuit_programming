#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double k1, k2, Y;

    // 1-misol
    k1 = 0.02;
    k2 = 4;
    if (k1 * k2 < 1)
        Y = sqrt(fabs(2 * k1 - 7 * k2));
    else
        Y = sqrt(2 * k1 + 7 * k2);
    cout << fixed << setprecision(3) << "Y = " << Y << endl;

    // 2-misol
    k1 = 9;
    k2 = 7;
    if (k1 * k2 < 1)
        Y = sqrt(fabs(2 * k1 - 7 * k2));
    else
        Y = sqrt(2 * k1 + 7 * k2);
    cout << "Y = " << Y << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}