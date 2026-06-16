#include <iostream>
using namespace std;

int main() {

    long long suma = 0;

    for(int i = 1; i <= 100; i++) {

        suma += i * i;
    }

    cout << "Suma de cuadrados = "
         << suma;

    return 0;
}
