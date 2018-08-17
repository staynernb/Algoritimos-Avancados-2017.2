#include <iostream>
#include <list>

using namespace std;

int main() {
        list<char> res;
        list<char>::iterator it;
        
        string entrada;
        
        while (cin >> entrada) {
        	res.clear();
        	it = res.begin();
        	
        	for (int i = 0; entrada[i] != '\0'; i++) {
        		if (entrada[i] == ']') {
        			it = res.end();
        		} else if (entrada[i] == '[') {
        			it = res.begin();
        		}
        		
        		if (entrada[i] != '[' and entrada[i] != ']') {
        			res.insert(it, entrada[i]);
        		}
        	}
        	
        	for (it = res.begin(); it != res.end(); it++) {
        		cout << *it;
        	}
        	
        	cout << endl;
        }
        
        return 0;
}
