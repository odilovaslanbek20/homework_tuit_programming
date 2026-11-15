#include <iostream>
#include <string>
using namespace std;

int main() {
    string matn;
    cout << "Satr kiriting: ";
    getline(cin, matn);

    int n = matn.length();
    char A[1000];
    for (int i = 0; i < n; i++) A[i] = matn[i];

    int k = 0;   
    for (int i = 0; i < n; i++) {
        char c = A[i];
        if (!((c >= 'H' && c <= 'O') || (c >= 'h' && c <= 'o'))) {
            A[k] = c;  
            k++;
        }
    }

    cout << "Natija: ";
    for (int i = 0; i < k; i++) cout << A[i];
    cout << endl;

    return 0;
}