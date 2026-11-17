#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

bool unliBor(const string& soz) {
    string unlilar = "aeiouAEIOU";
    for (char c : soz) {
        if (unlilar.find(c) != string::npos) {
            return true;  
        }
    }
    return false;         
}

int main() {
    string matn;
    cout << "Satr kiriting: ";
    getline(cin, matn);

    stringstream ss(matn);
    string soz;
    string natija = "";

    while (ss >> soz) {            
        if (!unliBor(soz)) {         
            if (!natija.empty()) natija += " ";
            natija += soz;
        }
    }

    cout << "Natija: " << natija << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}