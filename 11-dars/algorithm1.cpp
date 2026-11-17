#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    try {
        string satr;
        cout << "Satr kiriting: ";
        getline(cin, satr);   

        if (satr.empty()) {
            throw runtime_error("Satr bo'sh bo'lishi mumkin emas!");
        }

        int r = 0, k = 0, t = 0;

        for (char c : satr) {
            char x = tolower(c);  
            if (x == 'r') r++;
            if (x == 'k') k++;
            if (x == 't') t++;
        }

        cout << "\n--- Harflar soni ---\n";
        cout << "'r' = " << r << endl;
        cout << "'k' = " << k << endl;
        cout << "'t' = " << t << endl;
    }
    catch (const exception& e) {
        cerr << "Xato: " << e.what() << endl;
        return 1;
    }

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}