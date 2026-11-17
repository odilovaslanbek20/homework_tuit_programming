
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

bool unliBor(const string& soz);
string unliSozlarniOchir(const string& s);

int main() {
    string s;

    cout << "Satr kiriting: ";
    getline(cin, s);

    string natija = unliSozlarniOchir(s);

    cout << "Natija: \"" << natija << "\"" << endl;

    cout << "\nChiqish uchun Enter tugmasini bosing...";
    cin.get();

    return 0;
}

bool unliBor(const string& soz) {
    string unlilar = "aeiouAEIOU";

    for (int i = 0; i < soz.length(); i++) {
        if (unlilar.find(soz[i]) != string::npos) {
            return true;
        }
    }

    return false;
}

string unliSozlarniOchir(const string& s) {
    istringstream iss(s);
    string soz;
    string natija = "";

    while (iss >> soz) {
        if (!unliBor(soz)) {
            if (!natija.empty())
                natija += " ";

            natija += soz;
        }
    }

    return natija;
}
