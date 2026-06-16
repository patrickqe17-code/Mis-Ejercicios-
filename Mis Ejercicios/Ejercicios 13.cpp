#include <iostream>
using namespace std;

int main() {

    long long sumaPares = 0;
    long long sumaImpares = 0;

    for(int i = 1; i <= 200; i++) {

        if(i % 2 == 0)
            sumaPares += i;
        else
            sumaImpares += i;
    }

    cout << "Suma pares: "
         << sumaPares << endl;

    cout << "Suma impares: "
         << sumaImpares;

    return 0;
}
