#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <list>
#include <queue>
#include <set>

#define INF 0x3f3f3f3f
#define MAX 101
#define REP(i,a,b) for(int i = int(a); i <= int(b); ++i)
#define EACH(it,x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)

using namespace std;

typedef vector<set<int> > Graph;

int V, E;

int dist(Graph &g, int b)
{
	int r = 0;
	queue<int> Q;
	int viz[MAX], sz = g.size(), m;

	for (int i = 1; i <= sz; i++) viz[i] = -1;

	Q.push(b);
	viz[x] = m = 0;
	while (!Q.empty()) {
		int elem = Q.front();
		Q.pop();

		m = max(m, viz[elem]);

		EACH(it,g[elem]) {
			if (viz[*it] != -1) continue;
			viz[*it] = viz[elem] + 1;
			Q.push(*it);
		}
	}

	return m;
}

int main(void)
{
	int t = 0;
	int x, y;

	while (1)
	{
		scanf ("%d", &V);
		if (!V) break;

		Graph g(V+1);

		for (int i = 0; i < (V - 1); i++)
		{
			scanf ("%d %d", &x, &y);
			g[x].insert(x);
			g[y].insert(y);
		}

		int r = INF, v, b;
		for (int i = 1; i <= V; i++) {
			x = dist(g, i);
			if (b < r) {
				r = b;
				v = i;
			}
		}
		printf ("Teste %d\n%d\n\n", ++t, v);
	}

	return 0;
}
