
#include <iostream>
using namespace std;

bool tubMi(int k);

int main() {
    int n;

    cout << "n = ";
    cin >> n;

    cout << "[" << n << ".." << 2 * n
         << "] kesmadagi egizak tub sonlar:\n";

    int topildi = 0;

    for (int i = n; i <= 2 * n - 2; i++) {
        if (tubMi(i) && tubMi(i + 2)) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
            topildi++;
        }
    }

    if (topildi == 0)
        cout << "Egizak tub sonlar topilmadi." << endl;
    else
        cout << "Jami: " << topildi << " ta juftlik." << endl;

    cin.ignore();

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}

bool tubMi(int k) {
    if (k < 2) return false;
    if (k == 2) return true;
    if (k % 2 == 0) return false;

    for (int d = 3; d * d <= k; d += 2) {
        if (k % d == 0) return false;
    }

    return true;
}
