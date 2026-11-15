#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, eski, yangi;
    cout << "Satr kiriting: ";
    getline(cin, A);
    cout << "Almashtiriladigan qism: ";
    getline(cin, eski);
    cout << "Yangi qism: ";
    getline(cin, yangi);

    size_t pos = 0;
    while ((pos = A.find(eski, pos)) != string::npos) {
        A.replace(pos, eski.length(), yangi);
        pos += yangi.length();   
    }

    cout << "Natija: " << A << endl;
    return 0;
}