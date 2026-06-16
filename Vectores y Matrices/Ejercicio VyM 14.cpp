#include <iostream>
using namespace std;

int main() {
int m, n;

cout << "Filas: ";
cin >> m;
cout << "Columnas: ";
cin >> n;

int matriz[m][n];

cout << "Ingrese los elementos:\n";
for(int i = 0; i < m; i++)
for(int j = 0; j < n; j++)
cin >> matriz[i][j];

int suma = 0;

cout << "Elementos que forman la letra N:\n";

for(int i = 0; i < m; i++) {
for(int j = 0; j < n; j++) {

if(j == 0 || j == n - 1 || i == j) {
cout << matriz[i][j] << " ";
suma += matriz[i][j];
}
}
}
cout << "\nSuma = " << suma << endl;

return 0;
}
