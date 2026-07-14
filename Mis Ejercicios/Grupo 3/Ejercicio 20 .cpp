#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX = 10;

struct Alumno{

    string nombre;
    float matematica;
    float ingles;
    float fisica;
    float promedio;

};

//----------------------------------------------------

void leerGrupo(ifstream &archivo, Alumno grupo[], int &n){

    n = 0;

    while(archivo >> grupo[n].nombre
                  >> grupo[n].matematica
                  >> grupo[n].ingles
                  >> grupo[n].fisica){

        if(grupo[n].matematica < 0 || grupo[n].matematica > 20 ||
           grupo[n].ingles < 0 || grupo[n].ingles > 20 ||
           grupo[n].fisica < 0 || grupo[n].fisica > 20){

            cout << "Notas invalidas para "
                 << grupo[n].nombre << endl;

            continue;
        }

        grupo[n].promedio =
        (grupo[n].matematica +
         grupo[n].ingles +
         grupo[n].fisica) / 3.0;

        n++;
    }

}

//----------------------------------------------------

void ordenar(Alumno grupo[], int n){

    Alumno aux;

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){

            if(grupo[j].promedio < grupo[j+1].promedio){

                aux=grupo[j];
                grupo[j]=grupo[j+1];
                grupo[j+1]=aux;

            }

        }

    }

}

//----------------------------------------------------

void mostrar(string titulo, Alumno grupo[], int n){

    cout<<endl;
    cout<<"=============================="<<endl;
    cout<<titulo<<endl;
    cout<<"=============================="<<endl;

    cout<<left
        <<setw(12)<<"Nombre"
        <<setw(8)<<"Mat"
        <<setw(8)<<"Ing"
        <<setw(8)<<"Fis"
        <<setw(10)<<"Prom"<<endl;

    for(int i=0;i<n;i++){

        cout<<left
            <<setw(12)<<grupo[i].nombre
            <<setw(8)<<grupo[i].matematica
            <<setw(8)<<grupo[i].ingles
            <<setw(8)<<grupo[i].fisica
            <<fixed<<setprecision(2)
            <<grupo[i].promedio<<endl;

    }

}

//----------------------------------------------------

void guardarTercio(ofstream &archivo,
                   Alumno grupo[],
                   int n){

    int tercio=n/3;

    if(tercio==0)
        tercio=1;

    for(int i=0;i<tercio;i++){

        archivo
        <<grupo[i].nombre<<" "
        <<fixed<<setprecision(2)
        <<grupo[i].promedio
        <<endl;

    }

}

//----------------------------------------------------

int main(){

    ifstream grupoA("grupoA.txt");
    ifstream grupoB("grupoB.txt");

    if(!grupoA){

        cout<<"No se pudo abrir grupoA.txt";

        return 0;
    }

    if(!grupoB){

        cout<<"No se pudo abrir grupoB.txt";

        return 0;
    }

    Alumno A[MAX];
    Alumno B[MAX];

    int nA,nB;

    leerGrupo(grupoA,A,nA);

    leerGrupo(grupoB,B,nB);

    grupoA.close();
    grupoB.close();

    ordenar(A,nA);

    ordenar(B,nB);

    mostrar("GRUPO A (Orden de Merito)",A,nA);

    mostrar("GRUPO B (Orden de Merito)",B,nB);

    ofstream tercio("tercioSuperior.txt");

    guardarTercio(tercio,A,nA);

    guardarTercio(tercio,B,nB);

    tercio.close();

    ifstream mostrarTercio("tercioSuperior.txt");

    string nombre;
    float promedio;

    cout<<endl;
    cout<<"=============================="<<endl;
    cout<<"TERCIO SUPERIOR"<<endl;
    cout<<"=============================="<<endl;

    while(mostrarTercio>>nombre>>promedio){

        cout<<left
            <<setw(12)<<nombre
            <<fixed<<setprecision(2)
            <<promedio<<endl;

    }

    mostrarTercio.close();

    return 0;

}
