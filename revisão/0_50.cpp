#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite um valor entre 1 - 50" << endl;
    cin >> n;

    while(n < 0 || n > 50) {
        cout << "Valor incorreto, digite um valor entre 1 - 50" << endl;
        cin >> n;
    }

    for (int i = n-1; i > 0; i--) {
        cout << "Resto da divisao de " << n << " por " << i << " : " << n%i << endl;
    }

    return 0;
 }