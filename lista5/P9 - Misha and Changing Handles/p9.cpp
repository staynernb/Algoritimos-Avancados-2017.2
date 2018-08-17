#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;

int main(){
	int q;
	string novaStr,antigaStr;
	map<string,string>wordmap,usedmap;
	scanf("%d",&q);
	while(q--){
		cin>>antigaStr>>novaStr;
		if(usedmap.find(antigaStr)==usedmap.end()){
			usedmap[antigaStr]=antigaStr;
			usedmap[novaStr]=antigaStr;
			wordmap[antigaStr]=novaStr;
		}
		else{
			usedmap[novaStr]=usedmap[antigaStr];
			wordmap[usedmap[antigaStr]]=novaStr;
		}
	}
	cout<<wordmap.size()<<endl;
	for(map<string,string>::iterator it=wordmap.begin();it!=wordmap.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
