#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int producto;
    
    cout<<"Ingrese el tamañano de su vector: ";
    cin>>n;
    vector <int> a(n);
    vector <int> b(n);
    
    cout<<"\nAhora ingrese el numero por el que se va a multiplicar cada elemnto de su vector: "<<endl;
    cin>>producto;
    cout<<endl;
    

    for(int i=0;i<n;i++){
        cout<<"Ingrese el vector de la posición ["<<i<<"] : ";
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        b[i] = a[i] * producto;
    }
    cout<<"\nSu vector es: ";
    for(int elemento: a){
        cout<<elemento<<" ";
    }
    
    cout<<"\nEL nuevo vector multiplicado es: ";
    for(int elementos2: b){
        cout<<elementos2<<" ";
    }
    return 0;
}
