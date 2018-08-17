
#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {

    int n1, n2;
    cin>>n1>>n2;

    int cont = 0;

    while(n1>0 && n2>0) {

        if(n1==1 && n2==1) break;

        cont++;
        if(n1>n2) swap(n1,n2);
        n1++;
        n2-=2;
    }

    cout<<cont<<endl;

    return 0;
}
