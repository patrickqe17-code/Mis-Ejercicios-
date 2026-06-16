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
    
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout << "\nSu vector es: ";
    for (double elemento : a) {
        cout << elemento << " ";
    }
    cout << endl;
    cout<<"\nEl maximo valor de su vector es: ";
    cout<<max;
    return 0;
}
