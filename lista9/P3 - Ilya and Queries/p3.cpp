#include <bits/stdc++.h>

using namespace std;

int main()
{
     char s[100001];
    int a[100001], n, t, r;

    scanf("%s%d", s, &n);
    int len = strlen(s);

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    while (n--)
    {
        scanf("%d%d", &t, &r);
        printf("%d\n", a[r] - a[t]);
}
    return 0;
}
