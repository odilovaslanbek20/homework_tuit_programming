#include <iostream>
#include <cmath>
using namespace std;

class Tortburchak {
protected:
    double a, b;   

public:
    Tortburchak(double a, double b) : a(a), b(b) {}

    virtual double perimetr() {
        return 2 * (a + b);
    }

    virtual double yuza() {
        return a * b;
    }

    virtual void ikkiMartaOshir() {
        a *= 2;
        b *= 2;
    }

    virtual void nashrga() {
        cout << "=== To'g'ri to'rtburchak ===" << endl;
        cout << "Tomonlar : a = " << a << ", b = " << b << endl;
        cout << "Perimetr : " << perimetr() << endl;
        cout << "Yuza     : " << yuza() << endl;
    }

    virtual ~Tortburchak() {}
};

class Parallelogramm : public Tortburchak {
private:
    double burchak;   

public:
    Parallelogramm(double a, double b, double burchak)
        : Tortburchak(a, b), burchak(burchak) {}

    double perimetr() override {
        return 2 * (a + b);
    }

    double yuza() override {
        double rad = burchak * M_PI / 180.0;   
        return a * b * sin(rad);
    }

    void nashrga() override {
        cout << "=== Parallelogramm ===" << endl;
        cout << "Tomonlar : a = " << a << ", b = " << b << endl;
        cout << "Burchak  : " << burchak << "°" << endl;
        cout << "Perimetr : " << perimetr() << endl;
        cout << "Yuza     : " << yuza() << endl;
    }
};

int main() {
    Tortburchak t1(4, 6);
    Tortburchak t2(5, 10);

    cout << "########## BOSHLANG'ICH ##########\n";
    t1.nashrga();
    cout << endl;
    t2.nashrga();

    cout << "\n########## PARALLELOGRAMM ##########\n";
    Parallelogramm p1(4, 6, 30);
    p1.nashrga();

    cout << "\n########## IKKI MARTA OSHIRILDI ##########\n";
    t1.ikkiMartaOshir();
    t2.ikkiMartaOshir();
    p1.ikkiMartaOshir();   

    t1.nashrga();
    cout << endl;
    t2.nashrga();
    cout << endl;
    p1.nashrga();

    cout << "\n########## POLIMORFIZM ##########\n";
    Tortburchak* ptr = &p1;
    ptr->nashrga();   

    return 0;
}