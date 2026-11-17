#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Doira {
private:
    string nomi;      
    double radius;   
    double markazX;  
    double markazY;  
    string rangi;    

public:
    Doira(string n, double r, double x, double y, string rang) {
        nomi = n;
        radius = r;
        markazX = x;
        markazY = y;
        rangi = rang;
    }

    void chiqar() {
        cout << "Nomi   : " << nomi << endl;
        cout << "Radius : " << radius << endl;
        cout << "Markaz : (" << markazX << ", " << markazY << ")" << endl;
        cout << "Rangi  : " << rangi << endl;
    }

    double yuza() {
        return M_PI * radius * radius;
    }

    double perimetr() {
        return 2 * M_PI * radius;
    }

    double diametr() {
        return 2 * radius;
    }

    bool ichidaMi(double x, double y) {
        double d = sqrt((x - markazX) * (x - markazX) +
                        (y - markazY) * (y - markazY));
        return d <= radius;
    }
};

int main() {
    Doira d("Doira1", 5, 0, 0, "qizil");

    d.chiqar();

    cout << "Yuza     : " << d.yuza() << endl;
    cout << "Perimetr : " << d.perimetr() << endl;
    cout << "Diametr  : " << d.diametr() << endl;

    if (d.ichidaMi(2, 3))
        cout << "(2,3) ichida" << endl;
    else
        cout << "(2,3) tashqarida" << endl;
    
    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();    

    return 0;
}