
#include <iostream>
using namespace std;

int main() {
    const int N = 10;

    int X[N] = {5, -3, 8, 0, -7, 12, 4, -1, 9, 2};

    int Z[N];
    int zSoni = 0;

    for (int i = 0; i < N; i++) {
        if (X[i] > 0) {
            Z[zSoni] = X[i];
            zSoni++;
        }
    }

    for (int i = 0; i < zSoni - 1; i++) {
        for (int j = i + 1; j < zSoni; j++) {
            if (Z[i] < Z[j]) {
                int temp = Z[i];
                Z[i] = Z[j];
                Z[j] = temp;
            }
        }
    }

    cout << "X massivi: ";
    for (int i = 0; i < N; i++)
        cout << X[i] << " ";
    cout << endl;

    cout << "Z massivi (musbatlar, kamayib borish): ";
    for (int i = 0; i < zSoni; i++)
        cout << Z[i] << " ";
    cout << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}
