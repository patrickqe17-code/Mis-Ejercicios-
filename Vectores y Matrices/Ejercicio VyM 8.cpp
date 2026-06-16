#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int m;
    
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    cout << "Ingrese el numero de columnas: ";
    cin >> m;
    vector < vector <int>> matriz(n, vector<int>(m));
    cout<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Ingrese el numero en la posicion ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    
    int max=matriz[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matriz[i][j]>max){
                max=matriz[i][j];
            }
        }
    }
    
    int minimo=matriz[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matriz[i][j]<minimo){
                minimo=matriz[i][j];
            }
        }
    }
    
    cout<<"\nSu matriz es: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    cout<<"El minimo elemento de la matriz es: ";
    cout<<minimo;
    
    cout<<"\nEl maximo elemento de la matriz es: ";
    cout<<max;
    return 0;
}
