#include <iostream>
using namespace std;

int main() {
    long long sFor = 0, sWhile = 0, sDoWhile = 0;

    for (int i = 20; i <= 160; i += 2)
        sFor += (long long)i * i;

    int i = 20;
    while (i <= 160) {
        sWhile += (long long)i * i;
        i += 2;
    }

    i = 20;
    do {
        sDoWhile += (long long)i * i;
        i += 2;
    } while (i <= 160);

    cout << "for:       " << sFor << endl;
    cout << "while:     " << sWhile << endl;
    cout << "do...while:" << sDoWhile << endl;

    return 0;
}