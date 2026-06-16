#include <iostream>
#include <vector>
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

vector<int> v;

for(int j = 0; j < n; j++)
v.push_back(matriz[0][j]);

for(int i = 1; i < m; i++)
v.push_back(matriz[i][n - 1]);

if(m > 1)
for(int j = n - 2; j >= 0; j--)
v.push_back(matriz[m - 1][j]);

if(n > 1)
for(int i = m - 2; i > 0; i--)
v.push_back(matriz[i][0]);

cout << "Vector de bordes:\n";
for(int x : v)
cout << x << " ";

return 0;
}
