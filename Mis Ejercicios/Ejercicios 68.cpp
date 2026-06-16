#include <iostream>
using namespace std;

double factorial(int n) {

    double f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main() {

    double e = 0;

    for(int i = 0; i < 20; i++) {

        e += 1.0 / factorial(i);
    }

    cout << "Valor aproximado de e = "
         << e;

    return 0;
}
