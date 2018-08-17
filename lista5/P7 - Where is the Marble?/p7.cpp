#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int numeros[10005];

int main()
{    
    int T = 1;
    int N, Q;
    
    while (cin >> N >> Q, N || Q)
    {
        for (int i = 0; i < N; ++i)
            cin >> numeros[i];
        
        sort(numeros, numeros + N);
        
        cout << "CASE# " << T++ << ":\n";
        while (Q--)
        {
            int n;
            cin >> n;
            
            auto iter = lower_bound(numeros, numeros + N, n);
            if (iter == numeros + N || *iter != n)
                cout << n << " not found\n";
            else
                cout << n << " found at " << (iter - numeros) + 1 << '\n';
        }
    }
}
