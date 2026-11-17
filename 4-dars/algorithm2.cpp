#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m;
    cout << "m = "; cin >> m;

    if (m == 0) { cout << "Javob: 1" << endl; return 0; }

    int natija = 0;      
    int daraja = 1;      

    while (m > 0) {
        int bit = m % 2;        
        int inv = 1 - bit;      
        natija += inv * daraja; 
        daraja *= 2;            
        m /= 2;                 
    }

    cout << "Javob: " << natija << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}