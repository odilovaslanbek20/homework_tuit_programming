
#include <iostream>
using namespace std;

int* birlashtir(int* x, int nx, int* y, int ny);
void chiqar(int* a, int n, const char* nom);

int main() {
    int nx = 4, ny = 5;

    int* x = new int[nx] {1, 3, 5, 7};
    int* y = new int[ny] {2, 4, 6, 8, 9};

    int* z = birlashtir(x, nx, y, ny);

    chiqar(x, nx, "x");
    chiqar(y, ny, "y");
    chiqar(z, nx + ny, "z");

    delete[] x;
    delete[] y;
    delete[] z;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}

int* birlashtir(int* x, int nx, int* y, int ny) {
    int* z = new int[nx + ny];

    int i = 0, j = 0, k = 0;

    while (i < nx && j < ny) {
        if (x[i] <= y[j]) {
            z[k++] = x[i++];
        }
        else {
            z[k++] = y[j++];
        }
    }

    while (i < nx) {
        z[k++] = x[i++];
    }

    while (j < ny) {
        z[k++] = y[j++];
    }

    return z;
}

void chiqar(int* a, int n, const char* nom) {
    cout << nom << " = [";

    for (int i = 0; i < n; i++) {
        cout << a[i];

        if (i < n - 1)
            cout << ", ";
    }

    cout << "]\n";
}
