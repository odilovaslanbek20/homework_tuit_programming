#include <iostream>
using namespace std;

int main() {
    const int N = 100;
    int a[N];
    int test[] = {1,0,0,0,2,0,0,5,0,0,0,0,3,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    int testSize = sizeof(test) / sizeof(test[0]);
    cout << "test[] massivida " << testSize << " ta element bor.\n";

    if (testSize < N) {
        cerr << "XATO: test[] da " << N << " ta element yo'q! (" 
             << testSize << " ta bor)\n";
        return 1;
    }

    for (int i = 0; i < N; i++) a[i] = test[i];
     int maks = 0, joriy = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            joriy++;               
        } else {
            if (joriy > maks)       
                maks = joriy;
            joriy = 0;               
        }
    }
    if (joriy > maks)
        maks = joriy;
    cout << "Eng katta nollar ketma-ketligi uzunligi: " << maks << endl;
    return 0;
}