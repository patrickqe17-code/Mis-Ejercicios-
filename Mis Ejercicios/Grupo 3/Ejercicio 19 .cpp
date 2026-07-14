#include <iostream>

using namespace std;

void bubbleSort(int v[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (v[j] > v[j + 1]) {

                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void merge(int v[], int izq, int medio, int der) {

    int temp[1000];

    int i = izq;
    int j = medio + 1;
    int k = izq;

    while (i <= medio && j <= der) {

        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }

    while (i <= medio)
        temp[k++] = v[i++];

    while (j <= der)
        temp[k++] = v[j++];

    for (int x = izq; x <= der; x++)
        v[x] = temp[x];
}

void mergeSort(int v[], int izq, int der) {

    if (izq < der) {

        int medio = (izq + der) / 2;

        mergeSort(v, izq, medio);
        mergeSort(v, medio + 1, der);

        merge(v, izq, medio, der);
    }
}

int main() {

    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    while (n <= 0 || n > 100) {

        cout << "Cantidad invalida: ";
        cin >> n;
    }

    int a[100], b[100];

    for (int i = 0; i < n; i++) {

        cin >> a[i];
        b[i] = a[i];
    }

    bubbleSort(a, n);

    mergeSort(b, 0, n - 1);

    cout << "\nBubble Sort:\n";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n\nMerge Sort:\n";

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    return 0;
}
