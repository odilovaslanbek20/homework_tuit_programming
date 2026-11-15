#include <iostream>
#include <cmath>
using namespace std;

// ============================================================
// 1. TO'G'RI TO'RTBURCHAK (bazaviy klass)
// ============================================================
class Tortburchak {
protected:
    double a, b;   // tomonlar

public:
    // Konstruktor
    Tortburchak(double a, double b) : a(a), b(b) {}

    // Virtual metodlar
    virtual double perimetr() {
        return 2 * (a + b);
    }

    virtual double yuza() {
        return a * b;
    }

    // Virtual "ikki marta oshirish" — tomonlarni 2 ga ko'paytiradi
    virtual void ikkiMartaOshir() {
        a *= 2;
        b *= 2;
    }

    // Nashrga — barcha ma'lumotlar
    virtual void nashrga() {
        cout << "=== To'g'ri to'rtburchak ===" << endl;
        cout << "Tomonlar : a = " << a << ", b = " << b << endl;
        cout << "Perimetr : " << perimetr() << endl;
        cout << "Yuza     : " << yuza() << endl;
    }

    virtual ~Tortburchak() {}
};

// ============================================================
// 2. PARALLELOGRAMM (avlod klass)
// ============================================================
class Parallelogramm : public Tortburchak {
private:
    double burchak;   // a va b orasidagi burchak (gradus)

public:
    // Konstruktor — bazaviy konstruktorni chaqiradi
    Parallelogramm(double a, double b, double burchak)
        : Tortburchak(a, b), burchak(burchak) {}

    // Perimetr — qayta yuklanadi (bir xil formulada, lekin aniq)
    double perimetr() override {
        return 2 * (a + b);
    }

    // Yuza — qayta yuklanadi: a * b * sin(burchak)
    double yuza() override {
        double rad = burchak * M_PI / 180.0;   // gradus -> radian
        return a * b * sin(rad);
    }

    // ikkiMartaOshir() — QAYTA YUKLANMAYDI (ajdodnikidan foydalanadi)

    // Nashrga — burchak bilan birga
    void nashrga() override {
        cout << "=== Parallelogramm ===" << endl;
        cout << "Tomonlar : a = " << a << ", b = " << b << endl;
        cout << "Burchak  : " << burchak << "°" << endl;
        cout << "Perimetr : " << perimetr() << endl;
        cout << "Yuza     : " << yuza() << endl;
    }
};

// ============================================================
// 3. ASOSIY DASTUR
// ============================================================
int main() {
    // --- 1. Ikkita to'rtburchak ---
    Tortburchak t1(4, 6);
    Tortburchak t2(5, 10);

    cout << "########## BOSHLANG'ICH ##########\n";
    t1.nashrga();
    cout << endl;
    t2.nashrga();

    // --- 2. Parallelogramm ---
    cout << "\n########## PARALLELOGRAMM ##########\n";
    Parallelogramm p1(4, 6, 30);
    p1.nashrga();

    // --- 3. Ikki marta oshirish ---
    cout << "\n########## IKKI MARTA OSHIRILDI ##########\n";
    t1.ikkiMartaOshir();
    t2.ikkiMartaOshir();
    p1.ikkiMartaOshir();   // ajdodnikidan foydalanadi

    t1.nashrga();
    cout << endl;
    t2.nashrga();
    cout << endl;
    p1.nashrga();

    // --- 4. Polimorfizm (pointer orqali) ---
    cout << "\n########## POLIMORFIZM ##########\n";
    Tortburchak* ptr = &p1;
    ptr->nashrga();   // Parallelogramm::nashrga() chaqiriladi

    return 0;
}