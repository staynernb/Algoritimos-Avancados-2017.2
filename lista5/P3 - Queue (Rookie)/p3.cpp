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
#define MAX 10000005
typedef long long int ll;
int ans[1005];
int main(){
	int t,n;
	vector<pair<int,int> >arr;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		arr.resize(n);
		memset(ans,0,sizeof ans);
		REP(i,n){
			scanf("%d",&arr[i].first);
			
		}
		REP(i,n){
			scanf("%d",&arr[i].second);
		}
		sort(arr.begin(),arr.end());
	
		int maiorCount=0;
		REP(i,n){
			maiorCount=arr[i].second;
			REP(j,n){
				if(maiorCount==0&&ans[j]==0){
					ans[j]=arr[i].first;
					break;
				}
				if(ans[j]==0)
					maiorCount--;
			}
		}
		REP(i,n){
			printf("%d ",ans[i]);
		}
		printf("\n");
	}
}
