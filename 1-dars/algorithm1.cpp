
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alpha = 1.57;

    double y = 1 - 1.0 / (
        4 * pow(sin(2 * alpha), 2) +
        pow(cos(alpha), 2)
    );

    cout << "Natija: " << y << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}
