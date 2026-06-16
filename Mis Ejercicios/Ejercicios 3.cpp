#include <iostream>
using namespace std;

int main() {

    int suma = 0;

    for(int i = 1; i <= 100; i++) {

        suma = suma + (i * i);
    }

    cout << "La suma es: " << suma;

    return 0;
}
