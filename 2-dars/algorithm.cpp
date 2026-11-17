
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R = 5;
    int n = 6;

    const double PI = acos(-1.0);

    double a = 2 * R * sin(PI / n);

    double P = n * a;

    double S = (n * R * R / 2) * sin(2 * PI / n);

    cout << "Radius: " << R << endl;
    cout << "Burchaklar soni: " << n << endl;
    cout << "Tomon uzunligi: " << a << endl;
    cout << "Perimetri: " << P << endl;
    cout << "Yuzasi: " << S << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}

