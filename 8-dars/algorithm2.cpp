#include <iostream>
using namespace std;

void DoubleX(int& n, int* a, int x);

int main() {
    int na = 5;
    int* a = new int[na] {1, 3, 1, 5, 1};
    int xa = 1;

    DoubleX(na, a, xa);

    cout << "a massivi (na = " << na << "): ";
    for (int i = 0; i < na; i++) cout << a[i] << " ";
    cout << endl;

    int nb = 4;
    int* b = new int[nb] {2, 2, 7, 2};
    int xb = 2;

    DoubleX(nb, b, xb);

    cout << "b massivi (nb = " << nb << "): ";
    for (int i = 0; i < nb; i++) cout << b[i] << " ";
    cout << endl;

    int nc = 3;
    int* c = new int[nc] {9, 4, 9};
    int xc = 9;

    DoubleX(nc, c, xc);

    cout << "c massivi (nc = " << nc << "): ";
    for (int i = 0; i < nc; i++) cout << c[i] << " ";
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}

void DoubleX(int& n, int* a, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            a[i] *= 2;
        }
    }
}