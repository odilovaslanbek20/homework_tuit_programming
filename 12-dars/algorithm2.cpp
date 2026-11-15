#include <iostream>
#include <string>
#include <cmath>   
using namespace std;

class Doira {
public:
    string nomi;  
    double radius;  
    double markazX;   
    double markazY;   
    string rangi;   

    Doira(string n, double r, double x, double y, string rang) {
        nomi = n;
        radius = r;
        markazX = x;
        markazY = y;
        rangi = rang;
    }

    void chiqar() {
        cout << "===== DOIRA =====" << endl;
        cout << "Nomi      : " << nomi << endl;
        cout << "Radius    : " << radius << endl;
        cout << "Markaz    : (" << markazX << ", " << markazY << ")" << endl;
        cout << "Rangi     : " << rangi << endl;
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
        double masofa = sqrt(pow(x - markazX, 2) + pow(y - markazY, 2));
        return masofa <= radius;
    }
};

int main() {
    Doira d("Katta doira", 5, 0, 0, "qizil");

    d.chiqar();
    cout << "Yuza      : " << d.yuza() << endl;
    cout << "Perimetr  : " << d.perimetr() << endl;
    cout << "Diametr   : " << d.diametr() << endl;

    if (d.ichidaMi(2, 3))
        cout << "(2,3) nuqta doirada ICHIDA" << endl;
    else
        cout << "(2,3) nuqta doirada TASHQARIDA" << endl;

    return 0;
}