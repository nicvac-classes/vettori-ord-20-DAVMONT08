#include <iostream>
using namespace std;

int main() {
               
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int N, i, j, z, t, c;

    cout << "Inserire il numero di listelli a disposizione" << endl;
    cin >> N;

    int L[N];

    
    srand(time(0));

   
    i = 0;
    while (i < N) {
        L[i] = 4 + rand() % 7; 
        cout << "Lunghezza " << i + 1 << "° listello: " << L[i] << endl;
        i++;
    }

    
    i = 0;
    while (i < N) {
        j = 0;
        while (j < (N - 1) - i) {
            if (L[j] > L[j + 1]) {
                t = L[j];
                L[j] = L[j + 1];
                L[j + 1] = t;
            }
            j++;
        }
        i++;
    }

    
    cout << "Lunghezza listelli ordinati:" << endl;
    for (i = 0; i < N; i++) {
        cout << L[i] << endl;
    }

    
    c = 0;
    if (N >= 4) {
        i = 0;
        while (i < N - 1) {
            z = i + 1;
            if (L[i] == L[z]) {
                t = 2;
                while (z + 1 < N && L[z] == L[z + 1]) {
                    t++;
                    z++;
                }
                if (t >= 4) {
                    c++;
                }
                i = z + 1;
            } else {
                i++;
            }
        }
    }

    cout << "Numero di gruppi di 4 listelli uguali: " << c << endl;

    
}







}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
