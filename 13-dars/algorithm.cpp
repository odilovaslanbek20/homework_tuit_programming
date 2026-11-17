#include <iostream>
#include <string>
#include <vector>
#include <cctype>   
using namespace std;

struct Avtomobil {
    string nomi;
    string markasi;
    double narxi;
};

string kichiklashtir(const string& s) {
    string natija = s;
    for (char& c : natija) {
        c = tolower(c);
    }
    return natija;
}

int main() {
    vector<Avtomobil> avtomobillar = {
        {"Nexia",   "Chevrolet", 85000},
        {"Cobalt",  "Chevrolet", 120000},
        {"Spark",   "Chevrolet", 95000},
        {"Malibu",  "Chevrolet", 250000},
        {"Camry",   "Toyota",    350000},
        {"Corolla", "Toyota",    280000},
        {"Accent",  "Hyundai",   130000},
        {"Land Curser", "Toyota", 130000},
        {"Banan",   "Mersides",  130000},
        {"Gelik",   "Mersides",  130000},
    };

    string nom;
    cout << "Avtomobil nomini kiriting: ";
    getline(cin, nom);

    string nomKichik = kichiklashtir(nom);

    bool topildi = false;
    for (const auto& a : avtomobillar) {
        if (kichiklashtir(a.nomi) == nomKichik) {
            cout << "\n--- Ma'lumot ---\n";
            cout << "Nomi    : " << a.nomi << endl;
            cout << "Markasi : " << a.markasi << endl;
            cout << "Narxi   : " << a.narxi << " so'm" << endl;
            topildi = true;
        }
    }

    if (!topildi)
        cout << "\n'" << nom << "' nomli avtomobil topilmadi!\n";

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();    

    return 0;
}