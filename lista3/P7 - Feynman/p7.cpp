#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, soma, quadrado;
    while (true){
        cin >> num;
        if (num == 0){
            break;
        }
        soma = 0;
        for (int i = 0; i < num; i++){
            quadrado = num - i;
            soma += (quadrado * quadrado);
        }
        cout << soma << endl;

    }
 
    return 0;
}
