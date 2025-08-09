#include <iostream>
using namespace std;

void valores(int n[5]) {
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
    } 
}

int main() {

    int n_teste;
    cout << "Digite o numero de testes a serem realizados: ";
    cin >> n_teste;

    int n_par = 0;
    int n_impar = 0;
    int n_positivo = 0;
    int n_negativo = 0;

    for(int i = 0; i < n_teste; i++) {
        int n[5];
        cout << "Digite os numeros a serem testados: ";
        valores(n);

        for (int j = 0; j < 5; j++) {
            
            if (n[j]%2 == 0) {
                n_par++;
            }
            else {
                n_impar++;
            }
            if (n[j] >= 0) {
                n_positivo++;
            }
            else {
                n_negativo++;
            }
        }

        cout << "Quantidade de numeros pares: " << n_par << endl;
        cout << "Quantidade de  numeros impares: " << n_impar << endl;
        cout << "Quantidade de numeros positivos " << n_positivo << endl;
        cout << "Quantidade de numeros negativos " << n_negativo << endl;

        n_par = 0;
        n_impar = 0;
        n_positivo = 0;
        n_negativo = 0;
    }

    return 0;
}