#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,y,i,j,cnt=0;
    scanf("%d",&t);
    int a[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+t);
    scanf("%d",&y);
    int b[y];
    for(i=0; i<y; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(b,b+y);
    for(i=0;i<t;i++){
        for(j=0;j<y;j++){
            if(abs(a[i]-b[j])<=1){
                cnt++;
                b[j]=10000;
                break;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
