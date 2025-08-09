#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int laranja;
    float preco;

    cout << "Digite a quantidade de laranjas que deseja comprar: ";
    cin >> laranja;

    if (laranja < 12) {
        preco = 0.80;
    }
    else {
        preco = 0.65;
    }

    cout << fixed << setprecision(2);
    cout << "Total de " << laranja << " laranja(s), cada unidade custara: R$" << preco << endl;
    cout << "Valor total da compra sera de: R$" << (laranja * preco) << endl;

    return 0;
}

