#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
 
int main() {
 
    long int num, linhasTriangulo;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> linhasTriangulo;
        long int linhas = pow(2,linhasTriangulo) - 1;
        printf("%d\n", linhas);

    }

 
    return 0;
}
