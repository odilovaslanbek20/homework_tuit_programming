#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;
    
    cout << "a, b, c sonlarini kiriting: ";
    cin >> a >> b >> c;
    
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }
    if (a > b) {
        temp = a; a = b; b = temp;
    }
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();
    
    return 0;
}