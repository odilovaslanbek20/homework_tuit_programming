#include <iostream>
#include <string>
#include <cctype>     
using namespace std;

int main() {
    string s;
    cout << "Satr kiriting: ";
    getline(cin, s);   

    int soni = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            soni++;
        }
    }

    cout << "Katta harflar soni: " << soni << endl;
    return 0;
}