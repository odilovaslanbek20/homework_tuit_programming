// Table 1 algorithm C++ code

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alpha = 1.57;

    double y = 1 - 1.0 / (
        4 * pow(sin(2 * alpha), 2) +
        pow(cos(alpha), 2)
    );

    cout << "Natija: " << y << endl;

    return 0;
}


// Table 2 algorithm C++ code

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 1.825e2;
    double y = 18.225;
    double z = -3.298e2;

    double omega =
        abs((x / y) * x - sqrt(y / pow(x, 3)))
        + (y - x) * cos(y)
        - z / ((y - x) * (1 + pow(y - x, 2)));

    cout << "Omega = " << omega << endl;

    return 0;
}