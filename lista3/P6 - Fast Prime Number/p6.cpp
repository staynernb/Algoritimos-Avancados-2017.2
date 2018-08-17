#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, numAnalisar;
    cin >> num;
    for (int k = 0; k < num; k++){
        cin >> numAnalisar;
        int cont = 1;
        int raizNumAnaliza;
        raizNumAnaliza = (int) sqrt(numAnalisar);
        for( int i = 2 ; i <= raizNumAnaliza; i++){
            if (numAnalisar % i == 0){
                cont += 1;
       }
    }
    if (cont == 1){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
        }
    }

    return 0;
}
