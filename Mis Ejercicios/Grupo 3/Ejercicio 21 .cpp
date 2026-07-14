#include <iostream>

using namespace std;

void ordenarVector(int v[], int n){

    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){

            bool parI = (v[i] % 2 == 0);
            bool parJ = (v[j] % 2 == 0);

            if(parI && parJ){

                if(v[i] > v[j]){

                    int aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;

                }

            }
            else if(!parI && !parJ){

                if(v[i] < v[j]){

                    int aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;

                }

            }
            else if(!parI && parJ){

                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;

            }

        }

    }

}

int main(){

    int n;

    cout<<"Cantidad de elementos: ";
    cin>>n;

    while(n<=0 || n>100){

        cout<<"Cantidad invalida: ";
        cin>>n;

    }

    int v[100];

    for(int i=0;i<n;i++){

        cout<<"Elemento "<<i+1<<": ";
        cin>>v[i];

    }

    ordenarVector(v,n);

    cout<<"\nResultado:\n";

    for(int i=0;i<n;i++){

        cout<<v[i]<<" ";

    }

    return 0;

}
