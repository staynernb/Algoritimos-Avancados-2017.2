#include <iostream>

using namespace std;

int main()
{
    int num1, num2, fatorial;
    int  mdc = 1;
    cin >> num1 >> num2;
    if (num1 > num2){
        fatorial = num2;
    }else{
        fatorial = num1;
    }
    for (int i = 1; i <= fatorial; i++){
        mdc *= i;
    }
    cout << mdc << endl;
    return 0;
}
