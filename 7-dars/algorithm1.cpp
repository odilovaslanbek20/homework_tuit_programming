
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int n = 7;
    int A[n][n];

    int yuqori = 0, past = n - 1;
    int chap = 0, ong = n - 1;

    int son = 1;

    while (son <= n * n) {
        for (int i = chap; i <= ong; i++) {
            A[yuqori][i] = son++;
        }
        yuqori++;

        for (int i = yuqori; i <= past; i++) {
            A[i][ong] = son++;
        }
        ong--;

        if (yuqori <= past) {
            for (int i = ong; i >= chap; i--) {
                A[past][i] = son++;
            }
            past--;
        }

        if (chap <= ong) {
            for (int i = past; i >= yuqori; i--) {
                A[i][chap] = son++;
            }
            chap++;
        }
    }

    cout << "Spiral ko'rinishidagi matritsa:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}
