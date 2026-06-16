#include <iostream>
using namespace std;

int main() {

    double a,b,c,d;

    cout << "Ingrese a: ";
    cin >> a;

    cout << "Ingrese b: ";
    cin >> b;

    cout << "Ingrese c: ";
    cin >> c;

    cout << "Ingrese d: ";
    cin >> d;

    for(int x = 8; x <= 100; x++) {

        double fx =
        a*x*x*x*x
        - b*x*x*x
        + 2*c*x*x
        - x
        + d;

        cout << "f("
             << x
             << ") = "
             << fx
             << endl;
    }

    return 0;
}
