#include <iostream>
#include <cmath>
using namespace std;

int xonalarSoni(int n);

int main() {
    int a1, a2, a3;
    cout << "a1, a2, a3 ni kiriting: ";
    cin >> a1 >> a2 >> a3;

    cout << a1 << " → " << xonalarSoni(a1) << " xona" << endl;
    cout << a2 << " → " << xonalarSoni(a2) << " xona" << endl;
    cout << a3 << " → " << xonalarSoni(a3) << " xona" << endl;

    return 0;
}

int xonalarSoni(int n) {
    n = abs(n);
    if (n == 0) return 1;
    int soni = 0;
    while (n > 0) {
        soni++;
        n /= 10;
    }
    return soni;
}