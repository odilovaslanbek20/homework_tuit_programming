#include <iostream>
#include <string>
#include <cctype>   
using namespace std;

int main() {
    string matn;
    cout << "Satr kiriting: ";
    getline(cin, matn);   

    int soni = 0;
    for (char c : matn) {
        if (isupper(c)) {   
            soni++;
        }
    }

    cout << "Katta harflar soni: " << soni << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}