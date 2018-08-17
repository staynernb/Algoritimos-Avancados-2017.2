#include <iostream>
#include <stdio.h>
#include <math.h>
/**
Alessandra Barros
Ciencia da computacao - UFCG
**/
using namespace std;
int main(){
    long long int num;
    cin >> num;
    unsigned long long sorte;
    sorte = pow(2,num+1)-2;
   printf("%llu\n", sorte);

    return 0;
}
