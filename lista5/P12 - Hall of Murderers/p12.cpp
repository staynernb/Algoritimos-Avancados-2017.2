#include <bits/stdc++.h>


using namespace std;


int main()
{
	map<string, int> t;
	map<string, int> t2;
	
	map<string, int> :: iterator it;
	
	string entrada, entrada2;
	
	while (cin >> entrada >> entrada2)
	{
		++t[entrada];
		++t2[entrada2];
	}
	cout << "HALL OF MURDERERS\n";
	for (it = t.begin(); it != t.end(); ++it)
	{
		int aux = t2[it->first];
		
		if (!aux)
		{
			cout << it->first << ' ' << it->second << '\n';
		}
	}
	t.clear();
	t2.clear();
}
