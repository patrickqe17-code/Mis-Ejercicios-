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
int limite = (m < n) ? m : n;

for(int i = 0; i < limite; i++)
suma += matriz[i][n - 1 - i];

cout << "Suma diagonal secundaria = " << suma << endl;

return 0;
}
