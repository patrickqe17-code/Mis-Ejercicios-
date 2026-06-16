#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamano de su vector: ";
    cin >> n;
    vector<double> a(n);


    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor real para la posicion [" << i << "] : ";
        cin >> a[i];
    }
    
    int minimo=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<minimo){
            minimo=a[i];
        }
    }

    cout << "\nSu vector es: ";
    for (double elemento : a) {
        cout << elemento << " ";
    }
    cout << endl;
    cout<<"\nEl minimo valor de su vector es: ";
    cout<<minimo;
    return 0;
}
