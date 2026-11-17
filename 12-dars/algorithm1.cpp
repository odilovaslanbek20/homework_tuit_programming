#include <iostream>
#include <string>
using namespace std;

class Ovqat {
public:
    string nomi;
    double narxi;

    Ovqat(string n, double narx) {
        nomi = n;
        narxi = narx;
    }
};

class Ichimlik {
public:
    string nomi;
    double narxi;

    Ichimlik(string n, double narx) {
        nomi = n;
        narxi = narx;
    }
};

void buyurtma(const Ovqat& o, const Ichimlik& i) {
    cout << "Ovqat    : " << o.nomi << " — " << o.narxi << " so'm\n";
    cout << "Ichimlik : " << i.nomi << " — " << i.narxi << " so'm\n";
    cout << "Jami     : " << o.narxi + i.narxi << " so'm\n";
}

int main() {
    Ovqat osh("Osh", 35000);
    Ichimlik choy("Choy", 5000);

    buyurtma(osh, choy);

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}