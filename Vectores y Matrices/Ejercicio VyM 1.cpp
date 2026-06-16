#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    double suma=0;
    cout<<"Ingrese la cantidad de numeros que quiera en su vector: "<<endl;
    cin>>cantidad;
    
    vector <int> a(cantidad);
    
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese el numero en la posición ["<< i <<"] : ";
        cin>>a[i];
        suma += (double) a[i]/cantidad;
    }
    cout<<endl;
    
    cout<<"Su vector es: "<<endl;
    for(int elementos: a){
        cout<<elementos<<" ";
    }
    cout<<endl;
    
    cout<<"\nLa media de los elementos de su vector es: "<<endl;
    cout<<suma;

    return 0;
}
