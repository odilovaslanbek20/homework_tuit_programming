
#include <iostream>
using namespace std;

long long ekub(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long a, b;

    cout << "a va b ni kiriting: ";
    cin >> a >> b;

    long long natija = a / ekub(a, b) * b;

    cout << "EKUK = " << natija << endl;

    cin.ignore(1000, '\n');

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}
